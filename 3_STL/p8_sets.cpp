// Set : contain uique elements in sorted order
//        implemented using balanced BST (like Red-Black Tree)
//        present in <set> header file


#include<bits/stdc++.h>
using namespace std;


void example_set(){
    set<int>st; // declaration of set

    /* Insertion in set */
    st.insert(5); // adding element to the set
    st.insert(1); // {1,5}
    st.insert(4); // {1,4,5}
    st.emplace(2); // {1,2,4,5} (faster than insert)
    st.insert(2); // {1,2,4,5}
    st.insert(3); // {1,2,3,4,5}



    /* Finding elements in the set*/
    auto it = st.find(3); // returns iterator to the element if found else returns st.end() (mean iterator to next of last element)
    auto it2 = st.find(6); // returns st.end() as 6 is not present in set
    if(it != st.end()){
        cout<<"Element found: "<<*it<<endl; // prints 3
    }
    else{
        cout<<"Element not found"<<endl;
    }




    /* Count the elements in the set 1 or 0 */
    int count = st.count(4); // returns 1 if element is present else returns 0
    cout<<count<<endl; // prints 1


    /* Erasing elements from the set */
    st.erase(2); // erases the element 2 from the set
    st.erase(st.begin()); // erases the first element from the set

    auto it3 = st.find(5);
    st.erase(it3); // erases the element 5 from the set

    // erase elements in range
    auto it4 = st.find(3);
    st.erase(st.begin(),it4); // erases elements from begin to it4 (not including it4)


    
    /* Iterating over the set */
    for(auto it:st){
        cout<<it<<" "; // prints 1 4 5
    }




    /* upper bound and lower bound*/
    auto it5 = st.lower_bound(4); // returns iterator to the first element which is not less than 4
    auto it6 = st.upper_bound(4); // returns iterator to the first element which is greater than 4
    cout<<*it5<<" "<<*it6<<endl; // prints 4 5




    // rbegin() and rend(), begin() and end(), size(), empty() & swap() are same as vector
}
int main(){

    example_set();
    return 0;
}