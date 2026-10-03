#include<stdio.h>
int main(){
    int arr1[100]= {1,2,3};
    
    int arr2[100]={4,5,6};
   int n1 = 3;
   int n2 = 3;
    int arr3[100];
    for(int i=0;i<n1;i++){
        arr3[i]=arr1[i];
    }
    for(int i=0;i<n2;i++){
        arr3[i+n1]=arr2[i];
    }
    for(int i=0;i<n1+n2;i++){
        printf("%d ",arr3[i]);
    }
    
    return 0;
}

            
