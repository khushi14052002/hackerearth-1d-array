include<stdio.h>

main()

{

    int t,n,max,i,a[100000],b,sum=0;

    scanf("%d",&t);

    while(t>=1)

    {

        scanf("%d",&n);

        for(i=0;i<n;i++)

        {

            scanf("%d ",&a[i]);

        }

        max=a[0];

        sum=a[0];

        for(i=1;i<n;i++)

        {

            if(a[i]>=max)

            {

                max=a[i];

            }

            sum=sum+a[i];

        }

        if(max>=sum-max)

{

             printf("No\n");

         }

         else

         {

             printf("Yes\n");

         }

         t--;

    }

}

