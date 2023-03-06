#include<iostream>
using namespace std;

int removeDuplicatesC(int a[],int n){
      int count=0;
      for(int i=0;i<n;i++){
        if(i < n-1 && a[i] == a[i+1]){
            continue;
        }
        a[count++]= a[i];
      }
    return count;
};

int main(){
    int arr[] = {6,6,7,7,8,8};
    //int n = end(arr) - begin(arr);
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<removeDuplicatesC(arr,n)<<endl;
    return 0;
}