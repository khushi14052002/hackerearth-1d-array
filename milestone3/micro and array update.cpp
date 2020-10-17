#include <iostream>

#include<algorithm>

using namespace std;

int main() {

    int t ;    

    cin>>t;

    for(int l=0;l<t;l++){

        int n,k,flag =0;int min;

        cin>>n>>k;

        int arr[n];

        for(int i=0;i<n;i++ ){

            cin>>arr[i];

        }

        // business logic here

        min = *min_element(arr , arr + n);

        while(min <k ){

            flag++;

            min++;

        }

        cout<<flag<<endl;

    }

}

