#include<Wire.h>
#include<Adafruit_GFX.h>
#include<Adafruit_SSD1306.h>
#define OLED_RESET-1 
Adafruit_SSD1306 OLED(OLED_RESET);
#include <EEPROM.h>

#if (SSD1306_LCDHEIGHT!= 32)
#error("Height incorrect,please fix Adafruit_SSD1306.h!");
#endif


#define ledPin 13
int timer1_counter ;
#define buzzer 12
#define ldr  A3
#define slider A0


// Using Internal Pull Up  "Debouncing Define"
int button[4] = {5,4,3,6};  // 12 = Clock 
unsigned int lastbuttonstate[4] = {HIGH,HIGH,HIGH,HIGH};
unsigned int pressed[4] = {LOW,LOW,LOW,LOW};
unsigned long lastDebouncetime[4] = {0,0,0,0} ;
unsigned long debounceDelay = 50 ;
int buttonstate[4] ;

//settings variables
int eeAddress = 0;   // Location we want the data to be put.
int mode = 1 ;  // 1 = Clock  2 = Timer  3 = Stopwatch
bool change_min = 0;
bool change_hr = 0;
bool change_clock = 0;
bool timer_start = 0;
bool stopwatch_start = 0;
// end of timer state variable
bool countdown = 0;
unsigned long timer_end = 0;

struct Clock {
  int hour;
  int minute;
  int second;
};



Clock watch = {16,56,20};
Clock timer = {0,0,3};
Clock stopwatch = {0,0,0};

// Debounce
int debounce (int reading , int i)
{
  bool change = 0 ;
  if(reading != lastbuttonstate[i])
  {
    lastDebouncetime[i] = millis();
  }
  if((millis()-lastDebouncetime[i]) > debounceDelay)
  {
     if(reading != buttonstate[i])
     {
     //if it's change...will return the change and update state
      buttonstate[i] = reading ;
      change = 1 ;
     }
              
  }
  lastbuttonstate[i] = reading;
  return change;
}


// pressing button with debounce function
void debounce_func()
{
  for(int i = 0 ; i<4 ; i++)
  {
    int readbutton = digitalRead(button[i]);  
    if(debounce(readbutton,i) && readbutton == pressed[i])
    {
      tone(buzzer, 4000,50);
      // change mode
       if(i == 0)
       {
          if(mode == 1 && change_min == 0 && change_hr == 0)
          {
            mode = 2;        
          }
          else if(mode == 2 && change_min == 0 && change_hr == 0)
          {
            mode = 3;
          }
          else if(mode == 3 && change_min == 0 && change_hr == 0)
          {
            mode = 1;
          }
       }

       // change hour
       else if(i == 1)
       {
        if(mode == 1)
        {
          if(change_hr == 1)
          {
            change_hr = 0;
            change_clock = 0;      
          }
          else
          {
            change_hr = 1;
            change_clock = 1;
            change_min = 0;
          }
        }
        else
        {
          if(change_hr == 1)
          {
            change_hr = 0;      
          }
          else
          {
            change_hr = 1;
            change_min = 0;
          }
        } 
       }

       // Change minute
       else if(i == 2)
       {
        if(mode == 1)
        {
          if(change_min == 1)
          {
            change_min = 0;    
            change_clock = 0;        
          }
          else
          {
            change_min = 1;
            change_hr = 0; 
            change_clock = 1;      
          }
        }
        else
        {
          if(change_min == 1)
          {
            change_min = 0;      
          }
          else
          {
            change_min = 1;
            change_hr = 0; 
          }
        }
             
       }

       // Start stop
       else if(i == 3)
       {
          // timer
          if(mode == 2)
          {
            if(countdown)
            {
              countdown = 0;
              timer_start = 0;       
              noTone(buzzer);
              timer.hour = 0; 
              timer.minute = 1;
              timer.second = 0;
            }
            else if (timer_start == 1)
            {
              timer_start = 0;
            }
            else
            {
              timer_start = 1;
            }
          }
          
          // stopwatch
          if(mode == 3)
          {
            if(stopwatch_start == 1)
            {
              stopwatch_start = 0;
            }
            else
            {
              stopwatch_start = 1;
            }
          }
       }
    }
  }
}

// adjust time from slider
void adjust_timer()
{
  // adjust clock timer
  if(mode == 1 && change_min == 1)
  {
    watch.minute = map(analogRead(slider),0,1023,0,60);
  }
  else if(mode == 1 && change_hr == 1)
  {
    watch.hour = map(analogRead(slider),0,1023,0,24);
  }

  // adjust timer
  if(mode == 2 && change_min == 1)
  {
    timer.minute = map(analogRead(slider),0,1023,1,60);
    if(timer.minute == 60)
    {
      timer.minute = 59;
    }
  }
  else if(mode == 2 && change_hr == 1)
  {
    timer.hour = map(analogRead(slider),0,1023,0,24);
    if(timer.hour == 24)
    {
      timer.hour = 23;
    }
  }

  // adjust stopwatch
  if(mode == 3 && change_min == 1)
  {
    stopwatch.minute = map(analogRead(slider),0,1023,0,60);
    if(stopwatch.minute == 60)
    {
      stopwatch.minute = 59;
    }
  }
  else if(mode == 3 && change_hr == 1)
  {
    stopwatch.hour = map(analogRead(slider),0,1023,0,24);
    if(stopwatch.hour == 24)
    {
      stopwatch.hour = 23;
    }
  }
}


// show the main clock
void showclock()
{
  OLED.setTextColor(WHITE);
  OLED.setCursor(52,5);
  OLED.setTextSize(0.5);
  OLED.print("Clock");

  OLED.setTextColor(WHITE);
  OLED.setCursor(20,16);
  OLED.setTextSize(2);
  if(watch.hour < 10)
  {
    OLED.print("0");
  }
  OLED.print(watch.hour);
  OLED.print(":");
  if(watch.minute < 10)
  {
    OLED.print("0");
  }
  OLED.print(watch.minute);
  OLED.print(":");
  if(watch.second < 10)
  {
    OLED.print("0");
  }
  OLED.println(watch.second);
}


// show timer
void showtimer()
{
  OLED.setTextColor(WHITE);
  OLED.setCursor(52,5);
  OLED.setTextSize(0.5);
  OLED.print("Timer");
  
  OLED.setTextColor(WHITE);
  OLED.setCursor(20,16);
  OLED.setTextSize(2);
  if(timer.hour < 10)
  {
    OLED.print("0");
  }
  OLED.print(timer.hour);
  OLED.print(":");
  if(timer.minute < 10)
  {
    OLED.print("0");
  }
  OLED.print(timer.minute);
  OLED.print(":");
  if(timer.second < 10)
  {
    OLED.print("0");
  }
  OLED.println(timer.second);
}


// show stopwatch
void showstopwatch()
{
  OLED.setTextColor(WHITE);
  OLED.setCursor(40,5);
  OLED.setTextSize(0.5);
  OLED.print("Stopwatch");


  OLED.setTextColor(WHITE);
  OLED.setCursor(20,16);
  OLED.setTextSize(2);
  if(stopwatch.hour < 10)
  {
    OLED.print("0");
  }
  OLED.print(stopwatch.hour);
  OLED.print(":");
  if(stopwatch.minute < 10)
  {
    OLED.print("0");
  }
  OLED.print(stopwatch.minute);
  OLED.print(":");
  if(stopwatch.second < 10)
  {
    OLED.print("0");
  }
  OLED.println(stopwatch.second);
}

// update the main clock
void updateclock ()
{
  watch.second++;
  if(watch.second == 60)
  {
    watch.second = 0;
    watch.minute++;
  }
  if(watch.minute == 60)
  {
    watch.minute = 0;
    watch.hour++;
  }
  if(watch.hour == 24)
  {
    watch.hour = 0;
  }
}

// update timer
void updatetimer()
{

    timer.second--;
    if(timer.second < 0)
    {
      timer.second = 59;
      timer.minute--;
    }
    if(timer.minute < 0 && timer.hour > 0)
    {
      timer.minute = 59;
      timer.hour--;                                  
    }
}


// update stopwatch
void updatestopwatch ()
{
  stopwatch.second++;
  if(stopwatch.second == 60)
  {
    stopwatch.second = 0;
    stopwatch.minute++;
  }
  if(stopwatch.minute == 60)
  {
    stopwatch.minute = 0;
    stopwatch.hour++;
  }
  
}


void dim()
{
  int value = analogRead(ldr);
  //Serial.println(value);
  if(value > 800)
  {
    OLED.dim(true);
  }
  else
  {
    OLED.dim(false);
  }
}


void setup()
{
  OLED.begin(SSD1306_SWITCHCAPVCC,0x3C);
  OLED.clearDisplay();
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  for(int i = 0 ; i<4 ; i++)
  {
    pinMode(button[i],INPUT_PULLUP);
  }
  EEPROM.get(eeAddress, watch);

  
  // initialize timer1 
  noInterrupts();            // disable all interrupts
  TCCR1A = 0;// Set Mode of Timer : Normal Mode
  TCCR1B = 0;
  timer1_counter = 3036;   // preload timer 65536-16MHz/256/1Hz
  TCNT1 = timer1_counter;   // preload timer
  TCCR1B |= (1 << CS12);    // 256 prescaler
  TIMSK1 |= (1 << TOIE1);   // enable timer overflow interrupt
  interrupts();             // enable all interrupts
}

ISR(TIMER1_OVF_vect)        // interrupt service routine 
{
  TCNT1 = timer1_counter;   // preload timer
  digitalWrite(ledPin, digitalRead(ledPin) ^ 1);
  if(change_clock == 0)
  {
    updateclock();
  }
  
  if(change_min == 0 && change_hr == 0 && timer_start == 1 && countdown == 0)
  {
    updatetimer();
  }
  
  if(change_min == 0 && change_hr == 0 && stopwatch_start == 1)
  {
    updatestopwatch();
  }
  EEPROM.put(eeAddress, watch);
  
}

void loop()
{
  OLED.clearDisplay();
  dim();    
  debounce_func();
  
  if(mode == 1)
  {
    showclock();
  }
  else if(mode == 2)
  {
    showtimer();
  }
  else if(mode == 3)
  {
    showstopwatch();
  }
  if(change_min == 1 || change_hr == 1)
  {
    adjust_timer();
  }

  // if timer count down 0 left
  if(timer.hour <= 0 && timer.minute <= 0 && timer.second <= 0)
  {
    if(countdown == 1)
    {
      Serial.println(millis()-timer_end);
      Serial.println(millis());
      Serial.println(timer_end);
      if(millis()-timer_end >= 10000)
      {
        countdown = 0;
        timer_start = 0;       
        noTone(buzzer);    
        timer.hour = 0; 
        timer.minute = 1;
        timer.second = 0;
      }   
    }    
    else if(countdown == 0)
    {
      countdown = 1;
      tone(buzzer, 3000);
      timer_start = 0;
      timer_end = millis();
    }        
  }
  
  OLED.display();
  
}