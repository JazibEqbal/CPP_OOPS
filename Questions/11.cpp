#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<"Enter the string "<<endl;
    string s;
    cin>>s;
    int n=s.length();
    char *c=new char(n);
    for(int i=0;i<n;i++){
        c[i]=s[i];
    }
    for(int i=1;i<n;i++){
        char temp=c[i];
        int j=i-1;
        while(j>=0 && c[j]>temp){
            c[j+1]=c[j];
            j--;
        }
        c[j+1]=temp;
    }
    cout<<"Sorted string is ";
    for(int i=0;i<n;i++){
        cout<<c[i];
    }
    cout<<"\n";
}