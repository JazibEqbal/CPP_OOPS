#include<bits/stdc++.h>
using namespace std;

void accept(int arr[30][30]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
}
void transpose(int a[30][30]){
    for(int i=0;i<3;i++){
        for(int j=i;j<3;j++){
            int temp;
            temp= a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
    }
 }
}
void add(int arr[30][30],int arr2[30][30],int m[30][30]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            m[i][j]=arr[i][j]+arr2[i][j];
        }
    }
}
void display(int arr[30][30]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int arr[30][30],arr2[30][30],m[30][30];
    cout<<"Choose the options..."<<endl;
    cout<<"1. Display"<<endl;
    cout<<"2. Transpose"<<endl;
    int options;
    cin>>options;
    switch(options){
        case 1:
              cout<<"Enter the elements for matix 1 "<<endl;
              accept(arr);
              cout<<"Enter the elements for matix 2 "<<endl;
              accept(arr2);
              cout<<"\n";
              cout<<"Addition of two matrices are"<<endl;
              add(arr,arr2,m);
              display(m);
              break;
        case 2:
              cout<<"Enter the elements of matix "<<endl;
              accept(arr);
              transpose(arr);
              cout<<"Transpose of two matrices are"<<endl;
              display(m);
              break;
        default:
               exit(0);
    }
}