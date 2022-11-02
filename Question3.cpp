// Write a program to accept an integer N and generate an integer M which is formed by reversing the digits of N. Please note N can have maximum 5 digits. Print the numbers N and M. Compare N with M and print the result.
#include <iostream>
using namespace std;

int main() {

  int number, reverse = 0, remainder;

  cout << "Enter an integer: ";
  cin >> number;
  int originalNum=number;
int num=number;
int count = 0;
    while (num != 0) {
        num = num / 10;
        ++count;
    }
 if(count<=5)
 {
  while(number != 0) {
    remainder = number % 10;
    reverse = reverse * 10 + remainder;
    number /= 10;
  }
    cout << "Original Number = " << originalNum <<endl;
  cout << "Reverse of Number = " << reverse<<endl;;
  if(reverse>originalNum)
  {
    cout<<"Reverse is greater than Original number"<<endl;
  }
  else
  {
    cout<<"Original number is greater than Reverse"<<endl;;
  }
 }
 else
 {
    cout<<"Number can have maximum 5 digits only...!!!";
 } 

  return 0;
}