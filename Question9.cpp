// Write a program to accept a list L1 of N integers. Accept integer M. Multiply each integer in the list by M and generate a new list L2. Print the lists L1 and L2

#include <iostream>

#include <vector>

#include <algorithm>

using namespace std;

int main()

{

    int size, temp, num;
    vector<int> vec1;
    vector<int> vec2;

    cout << "Enter size of list= "<<endl;

    cin >> size;


    cout << "Enter numbers in the list="<<endl;

    for (int i = 0; i < size; i++)

    {

         cin >> temp;

        vec1.push_back(temp);

    } 
    cout<< "Enter ineteger to multiply list = "<<endl;
    cin>>num;
    cout<<"Original List ="<<endl;
    unsigned int vec1Size = vec1.size();
  for( int i = 0; i < vec1Size; i++)
  {
    cout << vec1[i] << " ";
  }
    for( int i = 0; i < vec1Size; ++i)
  {
   int input=num*vec1[i];
vec2.push_back(input);
  }
  cout<<"\n";
  cout<<"List After Multiplication ="<<endl;
  for( int i = 0; i < vec1Size; i++)
  {
    cout << vec2[i] << " ";
  }
}



















/* #include<iostream>
using namespace std;
int main ()
{
    int arr1[100], arr2[100], i, n, m;

    cout << "Enter how much integers you want to enter = "<<endl;
    cin >> n;
    
    cout << "Enter the list of integers = "<< endl;
    for (i = 0; i < n; i++)
        cin >> arr1[i];

    cout << "Enter the integers to multiply elements = "<< endl;
    cin >> m;

      for (i = 0; i < n; i++)
      {
        arr2[i]=arr1[i]*m;
      } 

     cout << "Original Array : "<< endl;
      for (i = 0; i < n; i++)
      {
        cout << arr1[i]<<"\t";
      } 
     cout <<"\n";
      cout << "Array after multiplication : "<< endl;
      for (i = 0; i < n; i++)
      {
        cout << arr2[i]<<"\t";
      } 
} */