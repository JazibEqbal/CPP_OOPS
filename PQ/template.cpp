#include<iostream>
using namespace std;

template <typename T> T fun(T x, T y){
     return x>y? x : y;
}

int main(){
    cout<<fun<int>(5,7)<<endl;
    cout<<fun<char>('a','b')<<endl;
    cout<<fun<double>(5.7,5.6)<<endl;
    cout<<fun<string>("abc","jaja")<<endl;
    return 0;
}