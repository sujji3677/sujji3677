#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout<<"Enter array size";
	cin>>n;
	int a[n],key,ind,flag=0;
	cout<<"Enter arrays elements";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter element to delete";
	cin>>key;
	for(int i=0;i<n;i++)
	{
		if(a[i]==key)
		{
		    ind=i;
			n--;
			flag=1;
			break;	
		}
	}
	if(flag==1)
	{
		for(int j=ind;j<n;j++)
		{
		a[j]=a[j+1];
	    }
	    for(int i=0;i<n;i++)
	    {
	    	cout<<a[i]<<endl;
		}
	}
	else
	{
		cout<<"Element deleted";
	}
}

