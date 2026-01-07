// Priority Queue: A data structure that allows efficient retrieval of the highest (or lowest) priority element
//        implemented using heap data structure
//        It stores elements such that the largest (or smallest) element can be accessed in constant time


#include<bits/stdc++.h>
using namespace std;

void example_priority_queue(){

    /* Max-Heap using priority queue (default) */
    priority_queue<int>pq; // declaration of priority queue
    pq.push(5); // adding element to the priority queue
    pq.push(1); // {5,1}
    pq.push(4); // {5,4,1}
    pq.emplace(2); // {5,4,2,1} (faster than push)

    cout<<pq.top()<<endl; // returns the largest element i.e 5
    pq.pop(); // removes the largest element
    cout<<pq.top()<<endl; // returns the largest element i.e 4

    cout<<pq.size()<<endl; // returns the size of priority queue i.e 3
    cout<<pq.empty()<<endl; // returns true if priority queue is empty else false i.e 0 (false)




    /* Min-Heap using priority queue */
    priority_queue<int, vector<int>, greater<int>> p; // declaration of min-heap priority queue
    p.push(5); // adding element to the priority queue
    p.push(1); // {1,5}
    p.push(4); // {1,4,5}
    p.emplace(2); // {1,2,5,4} (faster than push)
    
    cout<<p.top()<<endl; // returns the smallest element i.e 1
    p.pop(); // removes the smallest element
    cout<<p.top()<<endl; // returns the smallest element i.e 2



    //Note: push and pop happens in O(log n) time complexity
    //      top happens in O(1) time complexity
    //      empty and size happens in O(1) time complexity


}

int main(){
    example_priority_queue();
    return 0;
}