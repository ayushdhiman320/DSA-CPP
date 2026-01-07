// pass by value and pass by reference
#include <bits/stdc++.h>
using namespace std;

//pass by value
void dosomething(int a){
    cout<<a<<endl;
    a++;  // a=6
    cout<<a<<endl;
    a++;  // a=7
    cout<<a<<endl;
}


//pass by reference
void dosomething1(int &b){
    cout<<b<<endl;
    b++;  // b=56
    cout<<b<<endl;
    b++; // b=57
    cout<<b<<endl;
}
int main(){
    //pass by value
    int a=5;
    dosomething(a);
    cout<<a<<endl;  // a =5 no change occurs as the copy of the a is passed to the function


    //pass by reference
    int b=55;
    dosomething1(b);
    cout<<b<<endl;  // b=57 change occurs as the reference of b is passed to the function i.e the address of b is passed to the function
}


// note :- arrays are always passed by reference
