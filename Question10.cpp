// Write a program to accept a list L1 of N integers. Accept integer D. Generate list L2 such that it contains only those integers from list L1 which are divisible by D. Calculate the size of list L2. Print the list L1, N, D, list L2 and its size.
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
    cout<< "Enter ineteger to divide list = "<<endl;
    cin>>num;
    cout<<"Original List ="<<endl;
    unsigned int vec1Size = vec1.size();
  for( int i = 0; i < vec1Size; i++)
  {
    cout << vec1[i] << " ";
  }
  for( int i = 0; i < vec1Size; ++i)
  {
   if(vec1[i]%num==0)
   {
    int input=vec1[i];
    vec2.push_back(input);
   }
  }
  cout<<"\n";
  unsigned int vec2Size = vec2.size();
  cout<<"List of elements divisible by"<<num <<" is ="<<endl;
  for( int i = 0; i < vec2Size; i++)
  {
    cout << vec2[i] << " ";
  }
  cout<<"\n";
  cout << "Size of Divisibility Vector = "<<vec2Size;
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

    cout << "Enter the integers to divide elements = "<< endl;
    cin >> m;

    for(i = 0;i < n;i++)
    {
        if(arr1[i]%m==0)
        {
           arr2[i]=arr1[i];
        }
    }
     cout << "Original Array : "<<endl;
    for(i = 0; i<n;i++)
    {
        cout << arr1[i] << "\t";
    }
    cout<<"\n";
    int getArrayLength = sizeof(arr2) / sizeof(int);
    cout << "Array After Division : "<<endl;
    for(i = 0; i<getArrayLength;i++)
    {
        cout << arr2[i] << "\t";
    }
cout<<"\n";
    cout << "Size Of array containing elements divisible by "<< m <<"is = "<<getArrayLength;


}*/