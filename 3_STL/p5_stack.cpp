// Stack : stack follows LIFO (Last In First Out) principle
//   |     |   <- Top
//   |     |  
//   |     |
//   -------

#include<bits/stdc++.h>
using namespace std;

void example_stack(){
    stack<int>st; // declaration of stack

    st.push(1); // adding element to the top of stack {1}
    st.push(2); // adding element to the top of stack {2,1}
    st.push(3); // adding element to the top of stack {3,2,1}
    st.emplace(4); // adding element to the top of stack (faster than push) {4,3,2,1}

    cout<<st.top()<<endl; // returns the top element of stack i.e 4

    st.pop(); // removes the top element of stack

    cout<<st.top()<<endl; // returns the top element of stack i.e 1

    cout<<st.size()<<endl; // returns the size of stack i.e 3

    cout<<st.empty()<<endl; // returns true if stack is empty else false i.e 0 (false)

    //swap function to swap two stacks
    stack<int>st1;
    st1.push(10);
    st1.push(20);
    st1.push(30);
    st.swap(st1); // now st contains elements of st1 and st1 contains elements of st




    //Note: Other functions are not present in stack as it is a restricted data structure
    //      indexing is not allowed in stack

}

int main(){
    example_stack();
    return 0;
}

