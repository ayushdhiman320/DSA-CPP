#include <bits/stdc++.h>
using namespace std;


/*
1
01
101
0101
10101
*/

void print1(int n)
{
    int start=1;
    for(int i=0;i<n;i++)
    {
        if(i%2==0) start=1;
        else start=0;
        for(int j=0;j<=i;j++){
            cout<<start;
            start=1-start;
        }
        cout<<endl;
    }
}


/*
1      1
12    21
123  321
12344321
*/

void print2(int n)
{
    for(int i=1;i<=n;i++)
    {
        //numbers 
        for(int j=1;j<=i;j++)
        {
            cout<<j;
        }
        
        //space
        for(int j=1;j<=2*(n-i);j++)
        {
            cout<<" ";
        }
        
        
        //numbers
        for(int j=i;j>=1;j--)
        {
            cout<<j;
        }
        cout<<endl;
    }
    
}

/*
1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 
*/
void print3(int n)
{
    int count =1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
    
}


/*
A
AB
ABC
ABCD
ABCDE
*/
void print4(int n)
{
    for(int i=0;i<n;i++)
    {
        for(char ch='A';ch<='A'+i;ch++)
        {
            cout<<ch;
        }
        cout<<endl;
    }
    
}

/*
A B C D E 
A B C D 
A B C 
A B 
A
*/
void print5(int n)
{
    for(int i=0;i<n;i++)
    {
        for(char ch='A'; ch<='A'+(n-i-1);ch++)
        {
            cout<<ch<<" ";
        }
        cout<<endl;
    }
    
}

/*
A 
B B 
C C C 
D D D D 
E E E E E 
*/
void print6(int n)
{
    for(int i=0;i<n;i++)
    {
        char ch = 'A'+i;
        for(int j=0;j<=i;j++)
        {
            cout<<ch<<" ";
        }
        cout<<endl;
    }
    
}
/*
    A    
   ABA   
  ABCBA  
 ABCDCBA 
ABCDEDCBA
*/
void print7(int n)
{
    for(int i=0;i<n;i++)
    {
        
        //space
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        
        // pattern or alphabet
        char ch='A';
        int breakpoint = (2*i+1)/2;
        for(int j=1;j<=2*i+1;j++)
        {
            cout<<ch;
            if(j<=breakpoint) ch++;
            else ch--;
        }
        
        //space
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
    
}

/*
E
DE
CDE
BCDE
ABCDE
*/
void print8(int n)
{
    char alp='A'+(n-1);
    char ch='A'+(n-1);
    for(int i=0;i<n;i++)
    {
        
        for(char ch=alp-i;ch<=alp;ch++)
        {
            cout<<ch;
        }
        cout<<endl;
    
    }
}

int main(){
    print1(5);
    print2(4);
    print3(5);
    print4(5);
    print5(5);
    print6(5);
    print7(5);
    print8(5);


    return 0;
}