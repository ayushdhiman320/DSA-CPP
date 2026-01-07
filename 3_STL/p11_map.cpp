// Map: stores key-value pairs, keys are unique and sorted in ascending order


#include<bits/stdc++.h>
using namespace std;

void example_map(){
    /* declaration of map */
    map<int,int>mp;
    map<int, pair<int,int>>mp1;
    map<pair<int,int>, int>mp2;


    /* Insertion in map */
    mp[1]=2; // inserting key-value pair using indexing operator
    mp.insert({2,3}); // inserting key-value pair using insert function
    mp.emplace(3,4); // inserting key-value pair using emplace function (faster than insert)

    // [1,2], [2,3], [3,4]

    // inserting in map with pair as key
    mp2[{1, 2}] = 3;                         // Key: {1,2}, Value: 3
    mp2.insert({{2, 3}, 4});                // Key: {2,3}, Value: 4
    mp2.emplace(make_pair(3, 4), 5);        // Key: {3,4}, Value: 5 (using emplace)




    /* Printing elements of map */
    for(auto it:mp){
        cout<<it.first<<" "<<it.second<<endl; // prints key and value
    }




    /* Access the value corresponding to key */
    cout<<mp[2]<<endl; // prints 3
    cout<<mp.at(3)<<endl; // prints 4
    cout<<mp[6]<<endl; // gives 0 as 6 is not present in map





    /* Finding elements in the map */
    auto it = mp.find(2); // returns iterator to the key-value pair if key is found else returns mp.end()
    cout<<it->first<<" "<<it->second<<endl; // prints 2 3


    /* Erasing elements from the map */
    mp.erase(2); // erases the key-value pair with key 2
    auto it2 = mp.find(3);
    mp.erase(it2); // erases the key-value pair pointed by iterator it2


    /* lower and upper bound */
    auto it3 = mp.lower_bound(2); // returns iterator to the first key-value pair which is not less than 2
    auto it4 = mp.upper_bound(2); // returns iterator to the first key-value pair which is greater than 2
    cout<<it3->first<<" "<<it3->second<<endl; // prints 2 3


    

}


int main(){
    example_map();
    return 0;
}