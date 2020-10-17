#include <bits/stdc++.h>
#define ll long long int
#define rep(i,a,n)for(int i=a;i<n;i++)
#define stringrep(i,a,n)for(unsigned int i=a;i<n;i++)
#define revrep(i,a,n)for(ll i=n-1;i>=a;i--)
#define IOS ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(0);

using namespace std;

int main(){
int n,k,x,y;
cin>>n>>k>>x>>y;

int arr[n];

map<int,int> mp;
map<int,int>:: iterator it;
map<int,int>:: iterator it1;

rep(i,0,n)
cin>>arr[i];

rep(i,0,n)
{
mp[arr[i]%k]++;
}
ll cnt=0;
for(it=mp.begin();it!=mp.end();it++)
{
int a=it->first;
for(it1=next(it,1);it1!=mp.end();it1++)
{
int b=it1->first;
if(a*b==y || a+b==x)
{
cnt+=mp[a]*mp[b];
}
}
}
cout<<cnt<<"\n";

return 0;
}
