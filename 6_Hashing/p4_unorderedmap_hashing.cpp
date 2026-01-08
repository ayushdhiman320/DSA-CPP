// Using unordered map for hashing is same as using map but in unordered map the elements are stored in random order using hashing.
// So, the time complexity of storing and fetching an element in unordered_map is O(1) on average for best and average case.
// But in worst case it can be O(n) if there are too many collisions.

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // precomputation
    unordered_map<int,int>mpp;  // using unordered_map instead of map
    for(int i=0;i<n;i++)
    {
        mpp[arr[i]]++;
    }
    
    int q;
    cout<<"enter the no of element you want to find the frequencies of: ";
    cin>>q;
    cout<<"Enter the elements to find the frequencies: "<<endl;
    while(q--)
    {
        int number;
        cin>>number;
        // fetching
        cout<<mpp[number]<<endl;
    }
    return 0;

}