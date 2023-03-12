#include<iostream>
using namespace std;

void leftrotate(int a[],int n){
    int x=a[0];
    int i;
    for(i=0;i<n-1;i++){
        a[i]=a[i+1];
    }
    a[i]=x;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}

int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    leftrotate(arr,n);
    return 0;
}