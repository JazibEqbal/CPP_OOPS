#include<iostream>
using namespace std;

int calcAvg(int marks[],int n){
    int total_marks=0;
    for(int i=0;i<n;i++){
           total_marks += marks[i];
    }
    return total_marks/n;
}

int main(){
    cout<<"Enter number of subjects"<<endl;
    int n;
    cin>>n;
    int marks[n];
    cout<<"Enter the marks of "<<n<<" subjects"<<endl;
    for(int i=0;i<n;i++){
        cin>>marks[i];
    }
    cout<<"Average marks of "<<n<<" subjects is "<<calcAvg(marks,n)<<endl;
    return 0;
}