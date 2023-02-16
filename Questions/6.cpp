#include<iostream>
using namespace std;

void insertElement(int a[],int index,int n,int key){
    for(int i = n; i >index; i--){
            a[i] = a[i-1];
    }
    a[index]=key;
    n++;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
}
}

int main(){
    int index;
    cout<<"Enter the size of array ";
    int n;
    cin>>n;
    cout<<"Enter the "<<n<<" elements "<<endl;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter the index where element need to be inserted"<<endl;
    cin>>index;
    int key;
    cout<<"Enter the value of the element"<<endl;
    cin>>key;
    insertElement(a,index,n,key);
    return 0;
}