#include<iostream>

#include<stdlib.h>

int main()

{

     long long int i,n,count=0,flag=0;

     scanf("%lld",&n);

    long long *a=(long long int *)calloc(n,sizeof(long long int));

    

    for(i=0;i<n;i++)     //scanning elements of array

    {

        scanf("%lld",&a[i]);

    }

    do

    {

        for(i=0;i<n;i++)

        {

            if(a[i]%2!=0 && a[i]>0)        //decrement condition

            {

            a[i]--;

            count++;

            

            }

        }

        for(i=0;i<n;i++)      //to check if array has all 0s after decrement operation

        {

        if(a[i]>0)

        flag=1;

        else

        flag=0;

        if(flag==1)           

        break;

        }

            for(i=0;i<n;i++)           //half operation 

            {

                if(flag!=0)

                {

                    a[i]=a[i]/2;

                if(i==n-1)            //traversing till last element to increment count for whole half operation

                count++;

                }

            }

                

        

        

        for(i=0;i<n;i++)            //to check if array has all 0s after half operation

        {

        if(a[i]>0)

        flag=1;

        else

        flag=0;

        if(flag==1)

        break;

        }

        

    }while(flag==1);       //you can use while instead

    

    printf("%lld",count);

    return 0;

 

}

