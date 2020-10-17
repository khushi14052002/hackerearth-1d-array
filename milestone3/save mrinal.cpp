#include<bits/stdc++.h>

using namespace std;

int main()

{

    int n,i;

    cin>>n;

    int a[n+1],q,l,r,c=0,j;

    for(i=1;i<=n;i++)

    cin>>a[i];

    cin>>q;

    while(q--)

    {

        c=0;

        int max=0;

        cin>>l>>r;

        for(i=l;i<=r;i++)

        {

            if(max<a[i])

            max=a[i];

        }

        int b[max+5]={0};

        for(i=l;i<=r;i++)

        b[a[i]]=1;

        for(i=0;i<=max;i++)

        if(b[i]==1)

        c++;

        cout<<c<<"\n";

    }

}

