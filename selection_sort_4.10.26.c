#include<stdio.h>
int main(){
    int arr[100]={7,254,57,24,575};
    int n = 5;
    int i;
    for(int i =0;i<n-1;i++){
       int min=i;
    
    for(int j=i+1;j<n;j++){
        if(arr[j]<arr[min]){
            min = j;
        }
    }
    int temp=arr[i];
    arr[i]=arr[min];
    arr[min]=temp;
}
printf("sorted array");
for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
}
    return 0;
}
