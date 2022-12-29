#include<iostream>
using namespace std;
int main()
{
	int sum=0;
	int array[10];
	cout<<"\n (1) First enter the values in the array"<<endl;
	cout<<"********************************************\n";
	for(int x=0;x<10;x++)
	{
		cout<<"Enter the value in index "<<x<<endl;
		cin>>array[x];
	}
	cout<<"\n********************************************";
	cout<<"\n(2) The value in array in descending order = \n";
	cout<<"-----------------------------------------------\n";
	for(int x=9;x>=0;x--)
	{
		cout<<"Array of index "<<x<<" = array["<<x<<"] = "<<array[x]<<endl;
	}
	
	for(int x=0;x<10;x++)
	{
		if(x==3 || x==5)
		{
			continue;
		}
		else
		{
			sum=sum + array[x];
		}
	}
	cout<<"\n******************************************************************\n";
	cout<<"\n (3) The addition of the array except index 3 and index 5 is = "<<sum;
	cout<<"\n\n********************************************************************\n";
}
