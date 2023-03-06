#include<bits/stdc++.h>
using namespace std;
//METHOD 1
int secondLargest(int a[],int n){
      if(n == 0 || n == 1){
          return -1;
      }
      sort(a,a+n);
      int largest = a[n-1];
      int smallest=-1;
      for(int i=n-2;i>=0;i--){
           if(a[i] < largest){
               smallest = a[i];
               break;
           }
      }
      return smallest;
};
//METHOD 2 Optimal
int SecondLargest(int a[],int n){
    if(n == 0 || n == 1){
        return -1;
    }
    int largest = INT_MIN;
    int second=-1;
    for(int i=0;i<n;i++){
        if(a[i] > largest){
            second = largest;
            largest = a[i];
        }
    }
    return second;
}
int main(){
    int arr[] = {2,1,5,4};
    int n=4;
    cout<<secondLargest(arr,n)<<endl;
    cout<<SecondLargest(arr,n)<<endl;
    return 0;
}