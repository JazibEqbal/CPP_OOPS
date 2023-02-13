#include<iostream>
using namespace std;

void deleteElement(int a[],int index,int n){
     if(index <= n-1){
         for (int i = index; i < n-1; i++){
            a[i] = a[i + 1];
    }
    n--;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
}
 }
 else{
    cout<<"Invalid index"<<endl;
 }
}

int main(){
    cout<<"Enter the size of array ";
    int n;
    cin>>n;
    cout<<"Enter the "<<n<<" elements of array"<<endl;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int index;
    cout<<"Enter the index of element to be deleted"<<endl;
    cin>>index;
    deleteElement(a,index,n);
    cout<<"\n";
    return 0;
}