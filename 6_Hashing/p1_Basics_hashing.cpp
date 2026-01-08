// Hashing:- It is basically prestoring and fetching the values when required.
// It is used to store the frequency of elements in an array or to check whether an element is present in the array or not.

#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cout<<"Enter the size of an array: ";   // defining the size of an array
    cin>>n;
    int arr[n];
    cout<<"Enter elements of the array: ";  // taking input of array elements
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    /* Prestoring the frequencies of elements in the hash array.(precomputation) */
    int hash[13]={0};   // assuming the elements of the array are in the range of 0 to 12
    for(int i=0;i<n;i++)
    {
        hash[arr[i]]+=1;    // eg: if arr[i]=3 then hash[3] will be incremented by 1
    }
    
    int q;
    cout<<"enter the no of element you want to find the frequencies of: ";  // number of queries
    cin>>q;
    cout<<"Enter the element to find the frequencies: "<<endl;  // taking input of elements whose frequency is to be found
    while(q--)
    {
        int number;
        cin>>number;
        /* Fetching the frequency of the element from the hash array. */
        cout<<hash[number];  // eg: if number=3 then hash[3] will be printed
        cout<<endl;
    }
    return 0;
}


/* Note:-
     1. The max size of an array inside the main should be less than or equal to 10^6.
     2. If the range is greater than 10^6 then it will throw an segmentation fault error.
     3. The max size of an array globally declared can be up to 10^7.


*/
