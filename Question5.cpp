// Write a program to accept a 5 digit integer N and then generates a number M by adding 1 to each digit.
#include<iostream>
#include<deque>
#include<vector>
using namespace std;
int main(){
    int n , add_element=1;
    deque <int> digits , new_digits;
    cout<<"Enter five digit number = \n";
    cin>>n;

  while (n > 0)
{
    int digit = n%10;
    n/= 10;
    digits.push_front(digit);
}

    for(int i : digits){
        cout<<i<<" ";
    }
 
    cout<<"\nAfter adding to each digits\n";
    for (int i =0; i<digits.size();i++){
        int new_digit=add_element+digits[i];
        cout<<new_digit;
    }
   
}

