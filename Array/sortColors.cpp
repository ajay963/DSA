// Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

// We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

// You must solve this problem without using the library's sort function.


// Example 1:

// Input: nums = [2,0,2,1,1,0]
// Output: [0,0,1,1,2,2]
// Example 2:

// Input: nums = [2,0,1]
// Output: [0,1,2]


#include<iostream>
#include<vector>
using namespace std;

vector<int> sortColor(vector<int>& nums){
    for(int j=0;j<nums.size();j++){
        for (int k = j+1; k<nums.size();k++){
          if(nums[j]>nums[k])
          swap(nums[j],nums[k]);
        }
    }
    return nums;
}

void printArray(vector<int> arr){
    for (int j=0;j<arr.size();j++)
    cout<<arr[j]<<" ";
}

int main(){
    vector<int> arr;
    arr.push_back(2);
    arr.push_back(0);
    arr.push_back(2);
    arr.push_back(1);
    arr.push_back(1);
    arr.push_back(0);
    arr.push_back(2);

    printArray(sortColor(arr));

    return 0;
}