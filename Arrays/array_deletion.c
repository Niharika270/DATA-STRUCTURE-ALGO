#include<stdio.h>

 void display(int arr[], int n){
     //
     //traversal
 for(int i=0; i<n; i++)
    {
        printf("%d\n",arr[i]);
    }
    printf("\n");
 }

 void indexdeletion(int arr[],int size,int index){

 for(int i=index; i<size-1;i++)
    {
    arr[i]=arr[i+1];
    }

 }

 int main(){
 int arr[100]={1,2,6,78,8};
 int size=5, index=2;
 display(arr, size);
 indexdeletion(arr, size, index);
 size -=1;
 display(arr,size);
 }


