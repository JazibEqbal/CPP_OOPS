#include<iostream>
using namespace std;

void moveZeroes(int a[],int n){
    for(int i=0;i<n;i++){
      for(int j = 0;j<n-1;j++){
          if(a[i] == 0){
            int temp = a[i];
            a[i] =a[j];
            a[j] = temp;
          }
       }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    int arr[] = {9,0,0,0,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    moveZeroes(arr,n);
    return 0;
}