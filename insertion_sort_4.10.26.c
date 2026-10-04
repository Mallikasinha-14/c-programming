 #include<stdio.h>
 int main(){
    int arr[200]={4,47,474,747,7};
    int n=5;
    for(int i=0;i<n;i++){
        int current = arr[i];
        int prev = i-1;
        while(prev>=0 && arr[prev]>current){
            arr[prev+1]=arr[prev];
            prev--;
        }
        arr[prev+1]=current;
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
 }
 return 0;
}
