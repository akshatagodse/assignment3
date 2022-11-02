// Write a program to accept a list of N integers. Accept integer K. Find the Kth smallest number in the list and its position
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
    cout<< "Enter integer which smallest ineteger you want = "<<endl;
    cin>>num;

    std::sort(vec1.begin(),vec1.end());

    unsigned int vec1Size = vec1.size();
    if(num>vec1Size || num<0)
    {
        cout<<"Element not present "<<endl;
    }
  for( int i = 0; i < vec1Size; i++)
  {
    if(i==num)
    {
     cout<<num<<"th smallest number of list = " << vec1[i-1] << " ";
    }
    
  }
  

}






/* #include<iostream>
using namespace std;
int main ()
{
    int arr1[100], arr2[100], n, pos;
    int i, j, min, temp1, temp2;
    
    cout << "Enter how much integers you want to enter = ";
    cin >> n;
    
    cout << "Enter the list of integers = ";
    for (i = 0; i < n; i++) 
        cin >> arr1[i];
        
        cout << "Enter position which element you want = "<< endl;
        cin >> pos;

        for (i = 0; i<n ;i++)
        {
            arr2[i]=arr1[i];
        }

        
   for (i = 0; i < n - 1; i++) {
      min = i;
      for (j = i + 1; j < n; j++)
      if (arr1[j] < arr1[min])
      min = j;
      temp1 = arr1[i];
      arr1[i] = arr1[min];
      arr1[min] = temp1;
   }
   for(i = 0; i<n ;i++)
   {
    if(i==pos)
    {
     cout << pos << "th smallest element of array is = " << arr1[i-1] <<endl;
     temp2=arr1[i-1];
    }
   }

   for (i = 0; i<n ;i++)
   {
    if(arr2[i]==temp2)
    {
        cout << temp2 << " found at position = "<< i+1 << endl;
    }
   }



}    */    