// Queue : FIFO (First In First Out) data structure
//   --------------
//    4 3 2 1  <- Front
//   --------------


#include<bits/stdc++.h>
using namespace std;

void example_queue(){
    queue<int>q; // declaration of queue

    q.push(1); // adding element to the back of queue {1}
    q.push(2); // adding element to the back of queue {1,2}
    q.push(3); // adding element to the back of queue {1,2,3}
    q.emplace(4); // adding element to the back of queue (faster than push) {1,2,3,4}

    q.back()+=5; // adds 5 to the back element of queue i.e 4+5=9

    cout<<q.front()<<endl; // returns the front element of queue i.e 1
    cout<<q.back()<<endl; // returns the back element of queue i.e 9

    q.pop(); // removes the front element of queue

    cout<<q.front()<<endl; // returns the front element of queue i.e 2

    cout<<q.size()<<endl; // returns the size of queue i.e 3

    cout<<q.empty()<<endl; // returns true if queue is empty else false i.e 0 (false)

    //swap function to swap two queues
    queue<int>q1;
    q1.push(10);
    q1.push(20);
    q1.push(30);
    q.swap(q1); // now q contains elements of q1 and q1 contains elements of q
}
int main(){
    example_queue();
    return 0;
}