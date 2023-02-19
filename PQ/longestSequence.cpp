#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int ls(vector<int> nums){
      sort(nums.begin(), nums.end());
      int init= nums[0];
      int count=1;
      int ans=1;
      for(int i=1;i<nums.size();i++){
        if(nums[i]==init+1){
           count++;
      }
      else if(nums[i] != init+1){
        count=1;
      }
      init =nums[i];
      ans = max(ans,count);
}
return ans;
}

int main(){
    vector<int> n;
    n= {100,103,4,101,102,3,1};
    cout<<ls(n);
}