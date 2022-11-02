// Write a program to a accept a list of N integers. Find the largest and the smallest number in the list and their respective positions in the list.
#include <iostream>

#include <vector>

#include <algorithm>

using namespace std;

int main()

{

    int n;

    cout << "Enter size of list= ";

    cin >> n;

    int a;

    cout << "Enter numbers in the list=";

    vector<int> v;

    for (int i = 0; i < n; i++)

    {

cin >> a;

        v.push_back(a);

    } 

    for (vector<int>::iterator itr = v.begin(); itr != v.end(); itr++)

    {

         cout << *itr << " " ;  

    }
 cout << "\n";
    cout << "Largest integer= " << *max_element(v.begin(), v.end()) << endl;

    cout<<"position of largest integer is= "<<max_element(v.begin(),v.end())-v.begin()+1<<endl;

    cout << "Smallest integer= " << *min_element(v.begin(), v.end())<<endl;

    cout<<"position of smallest integer is= "<<min_element(v.begin(),v.end())-v.begin()+1<<endl;

}

/*#include<iostream>
using namespace std;
int main ()
{
    int arr[100], n, i, j, max, min;
    
    cout << "Enter how much integers you want to enter = ";
    cin >> n;
    
    cout << "Enter the list of integers = ";
    for (i = 0; i < n; i++)
        cin >> arr[i];
    max = arr[0];
    int index1 = -1;
    for (i = 0; i < n; i++)
    {
        if (max < arr[i])
            max = arr[i];
            index1 = i;
    }
    min = arr[0];
    int index2 = -1;
    for (j = 0; j < n; j++)
    {
        if (min > arr[j])
            min = arr[j];
            index2 = j;
    }
    cout << "Largest element : " << max <<"\tfound at position = "<< index1 <<endl;
    cout << "Smallest element : " << min<<"\tfound at position = "<< index2 <<endl;
    return 0;
}*/