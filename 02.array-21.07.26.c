#include<stdio.h>
int main()
{
    int a[100],n;
    printf("Enter no. of elements in array");
    scanf("%d",&n);
    printf("Enter array elements:\n");
    for(int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    
    }
    int pos,ele;
    printf("Enter pos:");
    scanf("%d",&pos);
    printf("Enter elements:");
    scanf("%d",&ele);
    for(int i=n; i>=pos;i--){
        a[i]=a[i-1];
        
        
    }
    a[pos-1]=ele;
    n++;
    printf("Array elements are:\n");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
