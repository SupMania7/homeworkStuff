#include<stdio.h>
    int main()
    {   int a[69],n;
        printf("No Elements of the array:\t");
        scanf("%d",&n);
        printf("Enter elements of the array:\t");
        for(int i=0 ; i<n;i++)
            scanf("%d",&a[i]);
        printf("The array is:\t");
        for(int j=0;j<n;j++)
            printf(" %d ",a[j]);
        
        
        return 0;
        

    }