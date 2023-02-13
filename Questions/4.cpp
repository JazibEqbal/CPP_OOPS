#include<iostream>
using namespace std;

void display(int a[],int x){
     for(int i=0;i<x;i++){
        cout<<a[i]<<" ";
     }
}

int max(int a[],int n){
    int max=a[0];
    for(int i=1;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    return max;
};
int min(int a[],int n){
    int min=a[0];
    for(int i=1;i<n;i++){
        if(a[i]<min){
            min=a[i];
        }
    }
    return min;
}

void multiply(int a[],int n){
    int b[n];
    for(int i=0;i<n;i++){
        b[i]=a[i]*5;
    }
    for(int i=0;i<n;i++){
        cout<<b[i]<<" ";
    }
}

int main(){
    cout<<"Enter the number of terms: "<<endl;
    int n;
    cin>>n;
    int a[n];
    cout<<"Enter the "<<n<<" terms of array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Choose your options:"<<endl;
    cout<<"1. Display the array"<<endl;
    cout<<"2. Find maximum element in the array"<<endl;
    cout<<"3. Find minimum element in the array"<<endl;
    cout<<"4. Display multiplication of array by 5"<<endl;
    cout<<"5. Exit"<<endl;
    cout<<"\n";
    cout<<"Select an option"<<endl;
    int options;
    cin>>options;
    switch(options){
        case 1: 
               cout<<"Array is ";
               display(a,n);
               cout<<"\n";
               break;
        case 2: 
               cout<<"Maximum element is ";
               cout<<max(a,n)<<endl;
               break;
        case 3: 
               cout<<"Minimum element is ";
               cout<<min(a,n)<<endl;
               break;
        case 4:
             cout<<"Multiplication of each element by five is ";
             multiply(a,n);
             cout<<"\n";
             break;
        case 5:
              exit(0);
              break;
        default:
              cout<<"Invalid option.."<<endl;
              break;   
    }
    return 0;
}