// List : list is exactly similar to vector but the difference is that list also gives you front operations
//        vector is implemented using dynamic array(or singly linked list) where as list is implemented using doubly linked list
// present in <list> header file


#include <bits/stdc++.h>
using namespace std;

void example_list(){

    /* Declaration of list */

    list<int> ls; // declaration of list
    ls.push_back(1); // adding element to the end of list
    ls.emplace_back(2); // adding element to the end of list (faster than push_back)
    ls.push_front(0); // adding element to the front of list
    ls.emplace_front(-1); // adding element to the front of list (faster than push_front)

    for(auto it:ls){
        cout<<it<<" "; // prints -1 0 1 2
    }
    cout<<endl;

    cout<<ls.front()<<endl; // prints the first element of list i.e -1
    cout<<ls.back()<<endl; // prints the last element of list i.e 2

    ls.pop_front(); // removes the first element of list
    ls.pop_back(); // removes the last element of list

    for(auto it:ls){
        cout<<it<<" "; // prints 0 1
    }

    // rest functions are same as vector like size(), begin(),rbegin(), rend(), end(), erase(), clear(), insert(), swap(), etc.
}

int main()
{
    example_list();
    return 0;
}