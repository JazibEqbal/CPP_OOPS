#include<iostream>
using namespace std;

void display(int a[],int x){
     for(int i=0;i<x;i++){
        cout<<a[i]<<" ";
     }
}

int max(int a[],int n){
    int max=a[0];
    for(int i=1;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    return max;
};
int min(int a[],int n){
    int min=a[0];
    for(int i=1;i<n;i++){
        if(a[i]<min){
            min=a[i];
        }
    }
    return min;
}

void multiply(int a[],int n){
    int b[n];
    for(int i=0;i<n;i++){
        b[i]=a[i]*5;
    }
    for(int i=0;i<n;i++){
        cout<<b[i]<<" ";
    }
}


int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    //display(a,n);
    //cout<<max(a,n);
    //cout<<min(a,n);
    multiply(a,n);
    display(a,n);
    return 0;
}