#include<bits/stdc++.h>

using namespace std;
#define ll long long int
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t,n,k;
cin>>t;
while(t--){
cin>>n>>k;
vector <ll> a(n),b(n);

for(ll i=0;i<n;i++)

cin>>a[i];

ll temp=INT_MIN;

for(ll i=0;i<n;i++)

{
cin>>b[i];

if(b[i]>temp)

temp=b[i];

}
// sort(b.begin(),b.end());

// int temp=b[n-1];

temp++;

ll time=0;

for(ll i=0;i<n;i++){

if(a[i]<temp){

time+=temp-a[i];

}

}
cout<<time*k<<"\n"; 

}

return 0;

}

