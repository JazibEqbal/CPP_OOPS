#include <iostream>

using namespace std;

int main()
{
    int n=13;
    int m=n/2;
    int flag=0;
    for(int i=2; i<=m;i++){
        if(n % i == 0){
            cout<<"Number is not Prime."<<endl; 
            flag=1;
            break;
        }
    }
    if(flag == 0){
        cout<<"Yes"<<endl;
    }
    
    return 0;
}