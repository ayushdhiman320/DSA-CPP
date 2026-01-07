#include<bits/stdc++.h>
using namespace std;

int main(){
    // int 4 bytes
    int a =5;
    cout<<a<<endl;

    // long 8 bytes
    long b=1234567890;
    cout<<b<<endl;

    // long long
    long long c=12345678912345678123456789;
    cout<<c<<endl;

    //float 4 bytes
    float d=3.141;
    cout<<d<<endl;

    //double 8 bytes
    double e=3.141592653589793;
    cout<<e<<endl;

    // char 1 byte
    char f='A';
    cout<<f<<endl;

    // String - sequence of characters
    ////   1st method    ////
    string str1;  //hello
    string str2;  //world
    cin>>str1>>str2;
    cout<<str1<<" "<<str2<<endl;


    ////   2nd method    ////
    string s1;
    getline(cin,s1);
    cout<<s1<<endl;

    return 0;

}