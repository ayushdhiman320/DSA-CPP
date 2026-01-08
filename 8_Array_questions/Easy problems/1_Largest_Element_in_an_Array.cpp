// Largest Element in an Array: we'll have to find the largest element in a given array of integers.
// while solving we have to show both brute-force and optimal approaches.
// here in the function we have given an array and its size (n) as input parameters and we have to return the largest element present in the array.

#include<bits/stdc++.h>
using namespace std;

/* Brute-force Approach */
int brute_force(vector<int> &arr, int n){

    sort(arr.begin(),arr.end()); // soring takes O(nlogn) time
    return arr.back();
    // overall time complexity: O(nlogn)
}


/* Optimal Approach */
int optimal_solution(vector<int> &arr, int n)
{
    int large=0;
    for(int i=0;i<n;i++)  // time complexity: O(n)
    {
        if(arr[i]>large) large=arr[i];
    }
    return large;
    // overall time complexity: O(n)
}


int main(){
    vector<int> arr={6,2,4,5,8,2,1};
    int n=arr.size();
    cout<<"Using Bruteforce method: ";
    cout<<brute_force(arr,n)<<endl;;
    cout<<"Using Optimal method: ";
    cout<<optimal_solution(arr,n)<<endl;
    return 0;

}

// therefore, the optimal approach is better than the brute-force approach in terms of time complexity.