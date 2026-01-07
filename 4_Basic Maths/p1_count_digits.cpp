// count no. of digits in a number

#include<bits/stdc++.h>
using namespace std;

int main(){

    // traditional method
    int n=1245667;
    int count=0;
    while(n>0){
        count++;
        n=n/10;
    }
    cout<<count<<endl; // prints 7



    // using log10 function
    int m=1245667;
    int count2= floor(log10(m))+1; // log10(n) gives no. of digits - 1
    cout<<count2<<endl; // prints 7
    return 0;

}