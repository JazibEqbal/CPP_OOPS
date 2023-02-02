#include<iostream>
using namespace std;

void display(int a[],int x){
     for(int i=0;i<x;i++){
        cout<<a[i]<<" ";
     }
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    display(a,n);
    return 0;
}