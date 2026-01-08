// Check if the array is sorted
/*
Given an array nums of n integers, return true if the array nums is sorted in non-decreasing order or else false.
    Input: nums = [1,2,2,3,4]
    Output: true

    Input: nums = [3,2,1]
    Output: false
*/


#include<bits/stdc++.h>
using namespace std;

/* Brute-force Approach */
bool brute_force(vector<int> &nums){
    for(int i=0;i<nums.size();i++) // traverse the array
    {
        for(int j=i+1;j<nums.size();j++)  // compare current element with all the elements after it
        {
            if(nums[i]>nums[j]) return false; // if any element is greater than the elements after it, return false
        }
    }
    return true;

    // overall time complexity: O(n^2)
}


/* Optimal Approach */
bool optimal(vector<int> &nums){

    for(int i=0;i<nums.size()-1;i++) // traverse the array
    {
        if(nums[i]>nums[i+1]) return false;  // if current element is greater than the next element, return false
    }
    return true;

    // overall time complexity: O(n)
}

int main(){
    
    vector<int> nums= {1,2,3,4,5};
    
    cout<<"Using Bruteforce method: ";
    cout<<brute_force(nums)<<endl;
    
    cout<<"Using Optimal method: ";
    cout<<optimal(nums)<<endl;
    
    return 0;
}