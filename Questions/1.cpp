#include<iostream>
using namespace std;

void fibonacci(int n){
    cout<<0<<" ";
    cout<<1<<" ";
    int t0=0,t1=1,s;
    for(int i=2;i<=n;i++){
          s=t0+t1;
          cout<<s<<" ";
          t0=t1;
          t1=s;
    }
};

int main(){
    cout<<"Enter number of terms "<<endl;
    int n;
    cin>>n;
    cout<<"Fibonacci Series: ";
    fibonacci(n);
    cout<<"\n";
    return 0;
}