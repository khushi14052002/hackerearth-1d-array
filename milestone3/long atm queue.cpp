#include<iostream>
using namespace std;
int main()
{
	int n,c=1;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		 if(a[i]<a[i-1])
        c++;
	}
	cout<<c;
}
