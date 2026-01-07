/* Functions */

#include <bits/stdc++.h>
using namespace std;
/* 1. Void -> which does not return anything
   2. return 
   3. parameterized
   4. non parameterized
   */


// Void function
void printname(){
    cout<<"Ayush is here"<<endl;
}

// Parameterized void function
void printname1(string name){
    cout<<"hey "<<name<<endl;
}

// return with parameterized function
int add(int a, int b)
{
    int c=a+b;
    return c;
}
int main(){
    //void function call
    printname();

    //parameterized void function call
    string name ="Striver";
    printname1(name);


    //return with parameterized function call
    int s=add(5,6);
    cout<<s<<endl;



    // inbuilt functions
    int n=5,m=20;
    cout<<max(n,m)<<endl;
    cout<<min(n,m)<<endl;
    return 0;
}