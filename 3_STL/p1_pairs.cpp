// pairs in STL :- pairs are used to store two values of different data types
// present in <utility> header file

#include <bits/stdc++.h>
using namespace std;

void examplepair()
{

    // normal pair example where we can store two values of different data types
    pair<int,int>p={1,3};
    cout<<p.first<<" "<<p.second<<endl;
    
    // nested pair example where we can store two values of different data types
    pair<int, pair<int,int>>p1={1,{3,4}};
    cout<<p1.first<<" "<<p1.second.first<<" "<<p1.second.second<<endl;
    
    // array of pairs
    pair<int,int> arr[]={{1,2},{4,5},{7,8}};
    cout<<arr[0].first;
}

int main(){
    examplepair();
    return 0;
}