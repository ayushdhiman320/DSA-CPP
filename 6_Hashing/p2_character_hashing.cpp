// character hashing : hashing characters using their ASCII values, in this we stores frequency of characters in a string
// Example:- string s = "hello world" then frequency of 'h' = 1, 'e' = 1, 'l' = 3, 'o' = 2, ' ' = 1, 'w' = 1, 'r' = 1, 'd' = 1
// in this we are assuming that the string contains only lowercase.

#include <bits/stdc++.h>
using namespace std;

int main(){

    string s;                   // input string
    cout<<"enter the string: ";
    cin>>s;
    
    int hash[26]={0};           // assuming the string contains only lowercase letters a-z
    for(int i=0;i<s.size();i++)
    {
        hash[s[i]-'a']+=1;      // eg: if s[i]='c' then hash['c'-'a'] i.e. hash[2] will be incremented by 1
    }                           // 'a' has ASCII value 97 so 'c'-'a' = 99-97 = 2 i.e. 'c' is stored at index 2 in hash array
    
    
    int q;
    cout<<"enter the no of element you want to find the frequencies of: ";
    cin>>q;
    cout<<"Enter the charaters to find the frequencies: "<<endl;
    while(q--){
        char c;
        cin>>c;
        
        cout<<hash[c-'a']<<endl;    // eg: if c='c' then hash[c-'a'] i.e. hash[2] will be printed
    }

    return 0;
}


// Note:-
// for number of characters we can use hash[256] to store all ASCII characters
// for both uppercase and lowercase we can use hash[52] where index 0-25
