// chcek whether a number is prime or not
// A prime number is a number that is divisible only by 1 and itself

#include<bits/stdc++.h>
using namespace std;

int main(){

    // method 1: O(n)
    int n;
    int cnt=0;
    cout<<"Enter number: ";
    cin>>n;
    
    for(int i=2;i<n;i++){
        if(n%i==0) cnt++;
    }
    
    if(cnt==0) cout<<n<<" is a prime number"<<endl;
    else cout<<n<<" is not a prime number"<<endl;






    // method 2: O(sqrt(n))
    int m;
    int count=0;
    cout<<"Enter number: ";
    cin>>m;

    for(int i=2;i<=sqrt(m);i++){
        if(m%i==0) count++;
    }

    if(count==0) cout<<m<<" is a prime number"<<endl;
    else cout<<m<<" is not a prime number"<<endl;
    
    
    return 0;
}