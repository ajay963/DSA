// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// You can return the answer in any order.

 

// Example 1:

// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Output: Because nums[0] + nums[1] == 9, we return [0, 1].
// Example 2:

// Input: nums = [3,2,4], target = 6
// Output: [1,2]

#include<iostream>
#include<vector>
using namespace std;



vector<int> twoSums(vector<int> nums,int target){
   vector<int> ans;
   for(int j = 0 ; j<nums.size(); j++ ){
       for( int k = j+1 ; k<nums.size() ; k++ ){
         if(nums[j]+nums[k] == target){
              ans.push_back(j);
              ans.push_back(k);
              return ans;
         }
       }
   }
   return ans;
}

int main(){
    vector<int> arr = {3,2,4};
    vector<int> ans;
    ans = twoSums(arr,6);
    cout<<ans[0]<<" "<<ans[1];
    
    return 0;
}