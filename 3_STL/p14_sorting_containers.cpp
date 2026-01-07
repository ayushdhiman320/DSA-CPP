// Soring containers: vector, deque, list and array only get sorted using sort() function from <algorithm> header file

#include<bits/stdc++.h>
using namespace std;

bool comp(pair<int,int> p1,pair<int,int> p2){
    if(p1.second<p2.second) return true;
    if(p1.second>p2.second) return false;

    // if second elements are same then compare first elements
    if(p1.first>p2.first) return true;
    return false;
}

void example_sorting(){
    /* Sorting array */
    int arr[] = {5, 2, 8, 1, 3};
    //default is ascending order
    sort(arr, arr + 5); // sorting array in ascending order
    for(int x : arr){
        cout<<x<<" "; // prints 1 2 3 5 8
    }


    //descending order
    sort(arr,arr+5, greater<int>()); // sorting array in descending order





    /* Sorting vector*/
    vector<int>v = {5, 2, 8, 1, 3};
    //ascending order
    sort(v.begin(), v.end()); // sorting vector in ascending order

    //descending order
    sort(v.begin(), v.end(), greater<int>()); // sorting vector in descending order






    /* Sorting according to own conditions (custom comparator logic) */

    //sorting pairs according to second element in ascending order
    //if second elements are same then according to first element in ascending order

    pair<int,int> p[]= {{1,3}, {2,2}, {3,3}, {4,1}};
    sort(p,p+4,comp); // sorting array of pairs using custom comparator in function comp
    for(auto x : p){
        cout<<x.first<<" "<<x.second<<endl;
    }
    // output:
        // 4 1
        // 2 2
        // 3 3
        // 1 3




}

int main(){
    example_sorting();
    return 0;
}