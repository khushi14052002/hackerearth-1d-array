#include <iostream>

using namespace std;

int main() {
	int n,sum=0,t;
	cin >> n;										// Reading input from STDIN
	int a[n];
	for(int i=0;i<n-1;i++){
		cin>>a[i];
        sum+=a[i];	
}
 t=n*n;
cout<<(t-sum);
}
