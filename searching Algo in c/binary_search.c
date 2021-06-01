#include<stdio.h>
main()
{
    int a[10],num,i,low,high,mid,m;
    printf("enter the size of array");
    scanf("%d",&m);
    printf("enter the array");
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the number to be searched");
    scanf("%d",&num);
    low=0;
    high=m-1;
    while(low<=high)
    {
        mid=(low+high)/2;

        if(a[mid]==num)
        {
            printf("found at %d",mid+1);
            break;
            }

        else
            {
            if(num<a[mid])
               high=mid-1;
            else
                low=mid+1;
            }




    }
        printf("not found");




}
