// Muti map : Same as map but it can store multiple values for same key i.e it allows duplicate keys

#include<bits/stdc++.h>
using namespace std;

void example_multimap(){

    // only mp[key] cannot be used here
    multimap<int, int> mmp;
    mmp.insert({1, 2});
    mmp.insert({1, 3});
    mmp.insert({2, 4});

    for(auto it : mmp){
        cout<<it.first<<" "<<it.second<<endl;
    }
}
int main(){
    example_multimap();
    return 0;
}