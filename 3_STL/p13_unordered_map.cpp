// unordered map: same as map but it doesn't store elements in sorted order

#include<bits/stdc++.h>
using namespace std;

void example_unordered_map(){
    unordered_map<int,int>um; // declaration of unordered map

    /* Insertion in unordered map */
    um[1]=2; // inserting key-value pair using indexing operator
    um.insert({2,3}); // inserting key-value pair using insert function
    um.emplace(3,4); // inserting key-value pair using emplace function (faster than insert)


    /* Printing elements of unordered map */

    for(auto it:um){
        cout<<it.first<<" "<<it.second<<endl; // prints key and value
        }




}

int main(){
    example_unordered_map();
    return 0;
}