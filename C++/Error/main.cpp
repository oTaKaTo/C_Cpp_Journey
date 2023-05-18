#include<iostream>

int main(){
    
    //Compile time error
    std::cout << "Hello World" << std::endl    // <<-- here dont have semicolon ,so it makes error
     return 0;

     //Runtime error   divide by 0
    int value = 7/0 ; 
    std::cout << "value : " << value << std::endl ;
     return 0;
}