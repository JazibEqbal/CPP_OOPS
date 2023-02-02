#include<iostream>
using namespace std;


void deleteElement(int a[],int index,int n){
     if(index <= n-1){
         for (int i = index; i < n-1; i++){
            a[i] = a[i + 1];
    }
    for(int i=0;i<n-1;i++){
        cout<<a[i]<<" ";
}
 }
 else{
    cout<<"Invalid Index"<<endl;
 }
}

int main(){
    cout<<"Enter the size of array ";
    int n;
    cin>>n;
    cout<<"Enter the "<<n<<" elements "<<endl;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int index;
    cout<<"Enter the index of element to be deleted"<<endl;
    cin>>index;
    deleteElement(a,index,n);
    return 0;
}