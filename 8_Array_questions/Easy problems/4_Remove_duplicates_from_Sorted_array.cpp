// Remove all duplicates from sorted array
/*
Given an integer array nums sorted in non-decreasing order, remove all duplicates in-place so that each unique element appears only once.
Return the number of unique elements in the array.
If the number of unique elements be k, then,
Change the array nums such that the first k elements of nums contain the unique values in the order that they were present originally.
The remaining elements, as well as the size of the array does not matter in terms of correctness.
The driver code will assess correctness by printing and checking only the first k elements of the modified array.
An array sorted in non-decreasing order is an array where every element to the right of an element is either equal to or greater in value than that element.

Example 1
    Input: nums = [0, 0, 3, 3, 5, 6]
    Output: 4
    Explanation:
        Resulting array = [0, 3, 5, 6, _, _]
        There are 4 distinct elements in nums and the elements marked as _ can have any value.
*/

#include<bits/stdc++.h>
using namespace std;

/* Brute Force approach */
int brute_force(vector<int> &nums){
    set<int>s;     // using set to store unique elements (set stores only unique elements in sorted order)
    for(int i=0;i<nums.size();i++)   // traverse the array
    {
        s.insert(nums[i]);   // insert each element into the set(it takes care of duplicates automatically)
    }
    int index=0; // index to keep track of position in original array
    for(auto it:s){  // traverse the set
        nums[index]=it;  // copy unique elements back to original array
        index++;  // increment index
    }
    return index;  // return number of unique elements


    //note:- inserting in set takes O(nlogn) and traversing set takes O(n) in total time complexity: O(nlogn)
    //       space complexity: O(n) for set
}


/* Optimal solution */
// using two pointers technique - one pointer to track unique elements and other to traverse the array
int optimal(vector<int> &nums){
    if (nums.empty()) return 0; // edge case: if array is empty
    
    int i=0; // index of first unique element
    for(int j=1;j<nums.size();j++)  // traverse the array from second element
    {
        if(nums[j]!=nums[i]){  // if current element is not equal to last unique element
            nums[i+1]=nums[j];  // place it next to last unique element
            i++;
        }
    }
    return i+1; // return number of unique elements 

    // note:- time complexity: O(n)
    //        space complexity: O(1)
}


int main(){
    
    vector<int> nums= {0,0,1,1,1,2,2,3,3,4};
    
    cout<<"Using Bruteforce method: ";
    cout<<brute_force(nums)<<endl;
    
    cout<<"Using Optimal method: ";
    cout<<optimal(nums)<<endl;
    return 0;
}