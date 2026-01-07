#include <bits/stdc++.h>
using namespace std;


/*
*****       1->5
****        2->4
***         3->3
**          4->2
*           5->1

formula = (n-rows+1)
*/
void print1(int n){
    for(int i=1; i<=n;i++)
    {
        for(int j=1;j<=n-i+1;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}


/*
12345       1->5
1234        2->4
123         3->3
12          4->2
1           5->1

formula = (n-rows+1)
*/
void print2(int n){
    for(int i=1; i<=n;i++)
    {
        for(int j=1;j<=n-i+1;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}



/*
    *
   ***
  *****
 *******
*********
*/

void print3(int n){
    for(int i=0; i<n;i++)
    {
        // space
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        
        // starts 
        for(int j=0;j<2*i+1;j++)
        {
            cout<<"*";
        }
        
        // space
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
}



/*
*********
 *******
  *****
   ***
    *
*/
void print4(int n){
    for(int i=0; i<n;i++)
    {
        // space
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        
        // starts 
        for(int j=0;j<2*n-(2*i+1);j++)
        {
            cout<<"*";
        }
        
        // space
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
}



/*
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
*/
void print5(int n){
    for(int i=0; i<n-1;i++)
    {
        // space
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        
        // starts 
        for(int j=0;j<2*i+1;j++)
        {
            cout<<"*";
        }
        
        // space
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
    
    for(int i=0; i<n;i++)
    {
        // space
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        
        // starts 
        for(int j=0;j<2*n-(2*i+1);j++)
        {
            cout<<"*";
        }
        
        // space
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
}


/*
*
**
***
****
*****
****
***
**
*
*/
void print6(int n)
{
    for(int i=1;i<=n*2-1;i++)
    {
        int starts=i;
        if(i>n) starts=2*n-i;
        for(int j=1;j<=starts;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}

int main(){
    print1(5);
    print2(5);
    print3(5);
    print4(5);
    print5(5);
    print6(5);
    return 0;
}