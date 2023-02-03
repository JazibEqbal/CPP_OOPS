#include<iostream>
using namespace std;

int main(){
    //1st way
    char name[100];
    cin.getline(name,100);
    cout<<name;
    return 0; 
}

// //2nd way
// int main(){
//     string name;
//     getline(cin,name);
//     cout<<name;
//     return 0; 
// }