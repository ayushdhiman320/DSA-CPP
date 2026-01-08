// we can use map to store the frequency of characters in a string
// key stores the number or character and value stores the frequency of that number or character

#include<bits/stdc++.h>
using namespace std;

void example_number_hashing(){

    int n;
    cout<<"Enter the size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // precomputation
    map<int,int>mpp;
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
}



void example_charater_hashing(){

    string s;
    cout<<"Enter the string: ";
    cin>>s;
    
    map<char,int> mp1;
    for(int i=0;i<s.size();i++)
    {
        mp1[s[i]]++;
    }
    
    int q;
    cout<<"enter the no of element you want to find the frequencies of: ";
    cin>>q;
    cout<<"Enter the charaters to find the frequencies: "<<endl;
    while(q--)
    {
        char c;
        cin>>c;
        cout<<mp1[c]<<endl;
    }
}

int main(){
    example_number_hashing();
    example_charater_hashing();
    return 0;
}


// Note:-
// map stores the keys in sorted order


/* Important infornation:
    1. The time complexity of storing and fetching an element in map is O(log n) where n is the number of elements in the map. [for all cases i.e. best, average and worst]
    2. as the elements are stored in sorted order so we have to traverse log n times to find the element.

    2. If we want to store and fetch elements in O(1) time complexity then we can use unordered_map. [for only best and average case] and for worst case it is O(n)
    3. unordered_map stores the elements in random order using hashing.


*/

