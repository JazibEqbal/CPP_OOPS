#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    string *str;
    for(int i=0;i<n;i++){
         str = new string();
         cin>>*str;
    }
    
    return 0;
}