// check whether a number is palindrome or not
// e.g.- 121 is a palindrome but 123 is not

#include<bits/stdc++.h>
using namespace std;

int main(){
    /* method 1: using maths */
    int num=121;
    int num2=num;
    int rev=0;
    while(num>0){
        int single_digi=num%10;
        rev=(rev*10)+single_digi;
        num=num/10;
    }
    
    if(num2==rev) cout<<"True"<<endl;
    else cout<<"false"<<endl;


    

    /* another method using string */

    int n=125;
    string s = to_string(n); // convert number to string
    reverse(s.begin(),s.end()); // reverse the string
    int m = stoi(s); // convert string back to number
    
    if(n==m) cout<<"True"<<endl;
    else cout<<"False"<<endl;

    return 0;
}