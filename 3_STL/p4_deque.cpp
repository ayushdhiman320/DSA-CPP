// Deque: similar to vector but allows fast insertion/removal at both ends
//        A Deque (Double-Ended Queue) is a versatile data structure allowing efficient insertion and deletion of elements from both its front (head) and rear (tail) ends
//        implemented using doubly linked list or circular buffer
// present in <deque> header file

#include <bits/stdc++.h>
using namespace std;

void example_deque(){

    deque<int>dq; // declaration of deque
    dq.push_back(1); // adding element to the end of deque
    dq.emplace_back(2); // adding element to the end of deque (faster than push_back)
    dq.push_front(0); // adding element to the front of deque
    dq.emplace_front(-1); // adding element to the front of deque (faster than push_front)
    for(auto it:dq){
        cout<<it<<" "; // prints -1 0 1 2
    }

    dq.pop_front(); // removes the first element of deque
    dq.pop_back(); // removes the last element of deque

    dq.back();; // returns the last element of deque
    dq.front(); // returns the first element of deque

    // rest functions are same as vector like size(), begin(),rbegin(), rend(), end(), erase(), clear(), insert(), swap(), etc.
    
}

int main(){
    example_deque();
    return 0;
}