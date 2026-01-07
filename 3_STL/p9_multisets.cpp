// multiset: everything is same as set but it allows duplicate elements


#include<bits/stdc++.h>
using namespace std;

void example_multiset(){
    multiset<int>ms; // declaration of multiset

    /* Insertion in multiset */
    ms.insert(1); // adding element to the multiset
    ms.insert(1); // {1,1}
    ms.insert(2); // {1,1,2}
    ms.emplace(3); // {1,1,2,3} (faster than insert)
    ms.insert(1); // {1,1,1,2,3}



    /* count elements in multiset */
    ms.count(1); // returns 3 as 1 is present 3 times in multiset




    /*erasing elements in multiset*/
    ms.erase(1); // erases all occurrences of 1 from the multiset

    auto it = ms.find(1);
    ms.erase(it); // erases only one occurrence of 1 from the multiset

    // erase elements in range
    auto it2 = ms.find(3);
    ms.erase(ms.begin(),it2); // erases elements from begin to it2 (not including it2)
}

int main(){
    example_multiset();
    return 0;
}

//