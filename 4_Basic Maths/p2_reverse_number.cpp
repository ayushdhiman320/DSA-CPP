// Write a program to generate the reverse of a given number N. Print the corresponding reverse number.
// Note : If A Number Has Trailing Zeros, Then Its Reverse Will Not Include Them. 
//For E.G., Reverse Of 10400 Will Be 401 Instead Of 00401.


#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n; // input number
    int reverse_num=0;
    while(n>0){
        int last_digit = n % 10; // get the last digit
        reverse_num = reverse_num * 10 + last_digit; // append last digit to reverse_num
        n = n / 10; // remove the last digit from n
    }
    cout<<reverse_num<<endl; // print the reverse number
    return 0;
}