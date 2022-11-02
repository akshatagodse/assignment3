// Write a program to accept 5 digit integer N and calculate the sum of its first and fifth digit.
#include <iostream>  
using namespace std;  
int main()  
{  
int number,sum=0,firstDigit,lastDigit;    
cout<<"Enter a number: ";    
cin>>number;
int num=number;
int count = 0;
    while (num != 0) {
        num = num / 10;
        ++count;
    }
 if(count<=5)
 {
    lastDigit = number % 10;
    while(number >= 10)
    {
        number = number / 10;
    }
    firstDigit = number;
    cout<<"Sum of first and fifth digit of number = "<<firstDigit+lastDigit;
 }
 else
 {
    cout<<"Number can have maximum 5 digits only...!!!";
 }  

return 0;  
}  