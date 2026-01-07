#include <bits/stdc++.h>
using namespace std;

/*
**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********
*/

void print1(int n){
    int inis=0;
    for(int i=0;i<n;i++)
    {
        //star
        for(int j=1;j<=n-i;j++)
        {
            cout<<"*";
        }
        //space
        for(int j=0;j<inis;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=n-i;j++)
        {
            cout<<"*";
        }
        inis+=2;
        cout<<endl;
        
    }
    
    inis=8;
    
    for(int i=1;i<=n;i++)
    {
        //star
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        //space
        for(int j=0;j<inis;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        inis-=2;
        cout<<endl;
        
    }
}



/*
*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *
*/
void print2(int n)
{
    int space=n*2-2;
    for(int i=1;i<=2*n-1;i++)
    {
        int star=i;
        if(i>n) star=2*n-i;
        for(int j=1;j<=star;j++)
        {
            cout<<"*";
        }
        for(int j=1;j<=space;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=star;j++)
        {
            cout<<"*";
        }
        cout<<endl;
        if(i<n) space-=2;
        else space+=2;
    }
    
 
}

/*
****
*  *
*  *
****
*/
void print3(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==0 || j==0 || i==n-1 || j==n-1)
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
        
}
int main(){
    print1(5);
    print2(5);
    print3(4);
    return 0;
}