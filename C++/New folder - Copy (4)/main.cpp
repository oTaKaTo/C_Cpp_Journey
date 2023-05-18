#include<iostream>
int addNumbers(int first_param, int second_param){
    int result = first_param + second_param ;
    return result ;
}

int main(){
    int firstnum = 23 ; //statement
    int secondnum = 12 ; 
    
   std::cout << "First number : " << firstnum << std::endl ;
   std::cout << "Second number : " << secondnum <<std::endl ;
  
   int sum = firstnum + secondnum ;
   std::cout << "Sum : " << sum << std::endl ;

   sum = addNumbers(30,54) ;
   std::cout << "Sum : " << sum << std::endl ;
   
   sum = addNumbers(434,543) ;
   std::cout << "Sum : " << sum << std::endl ;

   std::cout << "Sum : " << addNumbers(23,12) << std::endl ;
 
   return 0;
}