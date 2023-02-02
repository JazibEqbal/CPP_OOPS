#include<iostream>
using namespace std;

int main(){
    int rows;
    int columns;
    cin>>rows;
    cin>>columns;
    int a[rows][columns];
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            cin>>a[i][j];
    }
 }
     for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            cout<<a[i][j]<<" ";
    }
    cout<<"\n";
 }
    return 0;
}