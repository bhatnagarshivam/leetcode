#include<bits/stdc++.h>
class Solution {
public:
    int majorityElement(vector<int>& nums) {
    int n =nums.size();
    sort(nums.begin(),nums.end());
    if(n<2){
        return nums[0];
    }
    int Max=1;
    int result;
    int i =1;
    int flag=1;
    while(i<n){
  if(nums[i]==nums[i-1]){
    flag++;
  }
  else{
    if(flag>Max){
        Max=flag;
        result =nums[i-1];
    }
    flag=1;
  }
  i++;
    }
    if(flag>Max){
        Max=flag;
        result =nums[n-1];
    }
    if(Max > n/2){
        return result;
    }
    return -1;
    }
};