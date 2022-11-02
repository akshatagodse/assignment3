// Accept cost price(CP) and Selling price(SP) of an item. Calculate the ammount of PROFIT/LOSS made by the seller and print
#include<iostream>
using namespace std;

int main()
{
	int cp,sp,result;

	cout<<"Enter cost price of item : "<<endl;
	cin>>cp;
	cout<<"Enter selling price of item : "<<endl;
	cin>>sp;

	result=sp-cp;

	if(result>0)
		cout<<"Profit made = "<<result<<endl;
	else
		if(result<0)
    			cout<<"Loss made = "<<-(result)<<endl;
		else
			cout<<"There is no profit no loss";
}