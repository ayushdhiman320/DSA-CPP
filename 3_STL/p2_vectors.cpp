// Vectors :- vectors are dynamic arrays that can grow and shrink in size.
// present in <vector> header file

#include <bits/stdc++.h>
using namespace std;

void example_vectors(){

    /* Declaration of vector */

    vector<int>v; // declaration of vector
    v.push_back(1); // adding element to the end of vector
    v.emplace_back(2); // adding element to the end of vector (faster than push_back)
    cout<<v[0]<<" "<<v[1]<<endl;

    vector<pair<int,int>> vect; // declaration of vector of pairs
    vect.push_back({1,2}); // adding pair to the end of vector (need to add braces)
    vect.emplace_back(3,4);  // no need to add braces
    cout<<vect[0].first<<" "<<vect[0].second<<endl; 

    vector<int>v1(5,100); // creates a vector of size 5 with all values initialized to 100 {100,100,100,100,100}
    vector<int>v2(5); // creates a vector of size 5 with all values initialized to 0 {0,0,0,0,0}
    vector<int>v3(v1); // creates a vector by copying another vector v1



    /* Accessing vectors using iterators */

    vector<int>v4={1,2,3,4,5};
    vector<int>::iterator it=v4.begin(); // iterator pointing to the first element of vector
    it++; // iterator now points to the second element of vector i.e index=1
    cout<<*(it)<<endl; // prints the value at the iterator i.e 2

    vector<int>::iterator it1=v4.end(); // iterator pointing to the position after the last element of vector
    cout<<*(it1)<<endl;
    // vector<int>::iterator it2=v4.rend(); // iterator pointing to the position before the first element of vector
    // vector<int>::iterator it3=v4.rbegin(); // iterator pointing to the last element of vector

    cout<<v4[0]<<" "<<v4.at(0)<<endl; // both are used to access elements of vector but at() also checks for out of bounds
    cout<<v4.back()<<endl; // returns the last element of vector




    /* printing elements of vector using loop */
    // Method 1: using index
    vector<int>v5={10,20,30,40,50};
    for(vector<int>::iterator it=v5.begin();it!=v5.end();it++){
        cout<<*(it)<<" ";
    }

    // Method 2: using auto keyword
    for(auto it = v5.begin(); it!=v5.end();it++){
        cout<<*(it)<<" ";
    }

    // Method 3: using range based for loop or using for each loop
    for(auto it:v5){
        cout<<it<<" ";
    }




    /* Erase or Delete the elements */
    vector<int>v6={10,20,12,23};
    //delete single element
    v.erase(v6.begin()+1); // {10,12,23}

    //delete range of elements = [start,end): give starting index and ending index+1
    v.erase(v6.begin()+1,v6.begin()+3); // {10,23} : deltes elements at index 1 and 2




    /* Insert elements in vector */
    vector<int>v7(2,100); // {100,100}
    v7.insert(v7.begin(),300); // {300,100,100} : inserts 300 at index 0
    v7.insert(v7.begin()+1,2,10); // {300,10,10,100,100} : inserts two 10s at index 1

    // copy of one vector to another vector at specified position
    vector<int>v8(2,50); //{50,50}
    v7.insert(v7.begin(),v8.begin(),v8.end()); // [insert position, copied vector start, copied vector end] : {50,50,300,10,10,100,100}

    //size of vector
    cout<<v7.size()<<endl;

    // pop the last element
    v7.pop_back(); // {50,50,300,10,10,100}

    // swap two vectors
    vector<int>v9={1,2,3};
    vector<int>v10={4,5,6};
    v9.swap(v10); // v9={4,5,6} and v10={1,2,3}

    // clear the vector
    v9.clear(); // v9={}

    //check if vector is empty
    cout<<v9.empty()<<endl; // returns true if vector is empty else false
}

int main(){
    example_vectors();
    return 0;
}