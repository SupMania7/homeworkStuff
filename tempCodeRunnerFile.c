#include<stdio.h>
#include<stdlib.h>
int a[]={35,10,100,32,21,56,99,47};
int n=sizeof(a)/sizeof(int);

void swap(int* a, int* b)
{   int temp=*a;
    *a=*b;
    *b=temp;
} 
int partition(int l, int h)
{
    int i=l+1;
    int pivot=a[l];
    int j=h;
    while (1)
    {
            while(a[i]<pivot && i<=h)i++;
            while(a[j]>pivot && j>=l)j++;
       
    if(i<j)
          swap(&a[i],&a[j]);
    else
        break;
     
    }
    
        swap(&a[l],&a[j]);
return j;
    
    }


void quicksort(int l,int h)
{   int pivot;
    if(l<h){
    pivot=partition(l,h);
    quicksort(l,pivot-1);
    quicksort(pivot+1,h);
}}
int main()
{   printf("Start\nS");
    quicksort(0,n-1);
    for(int i = 0;i<n;i++)
        printf(" %d ",a[i]);
}