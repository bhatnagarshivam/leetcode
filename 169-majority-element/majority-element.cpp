#include<bits/stdc++.h>
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
   map<int,int>freq;
   for(int i=0;i<n;i++){
    freq[nums[i]]++;
   }
    for(auto num :freq){
        if(num.second>n/2){;
            return num.first;
        }
    }
    return 0;
    }
};