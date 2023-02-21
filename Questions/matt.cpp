#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
    int rows;
    int columns;
    cout<<"Enter number of rows"<<endl;
    cin>>rows;
    cout<<"Enter number of columns"<<endl;
    cin>>columns;
    int a[rows][columns];
    cout<<"Enter "<<rows*columns<<" elements"<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            cin>>a[i][j];
    }
 }
    for(int i=0;i<rows;i++){
        for(int j=i;j<columns;j++){
            int temp;
            temp= a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
    }
 }
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            cout<<a[i][j]<<" ";
    }

    return 0;
}
}