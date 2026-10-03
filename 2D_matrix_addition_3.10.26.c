#include<stdio.h>
int main(){
    int arr1[10][10],arr2[10][10],sum[10][10];
    int r,c;
    int i,j;
    printf("Enter no. elements in row and column of arr1");
    scanf("%d %d",&r,&c);
  
    printf("Enter elements of first matrix:\n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("Enter no. elements in row and column of arr2");
    scanf("%d %d",&r,&c);
  
    printf("Enter elements of first matrix:\n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &arr2[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            sum[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
   for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
           printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

    
