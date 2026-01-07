// Armstrong number : a number that is equal to the sum of cubes of its digits
// e.g.- 153 = 1^3 + 5^3 + 3^3 = 153

#include<bits/stdc++.h>
using namespace std;
int main(){

    int num=371;
    int num2=num;
    int sum=0;
    while(num>0){
        int single_digi=num%10;
        sum=pow(single_digi,3)+sum; // sum of cubes of digits [pow(base, exponent)]
        num=num/10;
    }
    
    if(num2==sum) cout<<"True"<<endl;
    else cout<<"false"<<endl;
    return 0;
}