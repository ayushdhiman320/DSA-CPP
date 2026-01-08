// Find second largest element in an array
/* Given an array of integers nums, return the second-largest element in the array. If the second-largest element does not exist, return -1.
    Input: nums = [8, 8, 7, 6, 5]
    Output: 7

    Input: nums = [10, 10, 10, 10, 10]
    Output: -1


    and we are assuming that the array contain positive integers only.
    for negative integers also, we can initialize large and sec_large with INT_MIN from <climits> header file.
*/

#include<bits/stdc++.h>
using namespace std;

/* Brute Force approach */
int brute_force(vector<int> &nums){
    if(nums.size()<2) return -1;   // edge case (if size of array is less than 2 i.e no second largest element)

    sort(nums.begin(),nums.end()); // sorting takes O(nlogn) time

    int large = nums.back();   // largest element

    for(int i=nums.size()-2;i>=0;i--){    // traverse from second last element to first   (O(n) time)
        if(large!=nums[i]) return nums[i];    // return the first element which is not equal to largest
    }
    return -1;      // if no second largest element found


    // Note:- Time complexity: O(nlogn) + O(n) = O(nlogn)
}

/* Better approach */
int better_solution(vector<int> &nums){
    int large=nums.at(0);  // assume first element is largest
    for(int i=1;i<nums.size();i++)    // traverse from second element to last element
    {
        if(large<nums[i]) large=nums[i];   // update largest if current element is greater
    }
    
    int sec_large=-1;    // initialize second largest as -1 (in case no second largest element found)
    for(int i=0;i<nums.size();i++){     // traverse the array again
        if(large!=nums[i] && nums[i]>sec_large) sec_large=nums[i];      // update second largest if current element is not equal to largest and greater than second largest
    }
    return sec_large;   // return second largest element


    // Note:- Time complexity: O(n) + O(n) = O(n)
}


/* Optimal approach */
int optimal_solution(vector<int> & nums){
    int large=nums.at(0);   // assume first element is largest
    int sec_large=-1;       // initialize second largest as -1 (in case no second largest element found)
    for(int i=0;i<nums.size();i++)    // traverse the array once
    {
        if(large<nums[i]){    // if current element is greater than largest
            sec_large=large;   
            large=nums[i];
        }
        else if(large>nums[i] && nums[i]>sec_large){    // if current element is not equal to largest and greater than second largest
            sec_large=nums[i];   
        }
    }
    return sec_large;  // return second largest element

    // Note:- Time complexity: O(n)
}

int main(){
    
    vector<int> nums= {8, 8, 7, 6, 5};
    
    cout<<"Using Bruteforce method: ";
    cout<<brute_force(nums)<<endl;

    cout<<"Using better method: ";
    cout<<better_solution(nums)<<endl;

    cout<<"Using Optimal method: ";
    cout<<optimal_solution(nums)<<endl;
    return 0;
}