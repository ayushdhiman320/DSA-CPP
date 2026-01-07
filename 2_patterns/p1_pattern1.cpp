/* 
Rules to remember for every pattern question 
1. for the outer loop ccount the number of lines i.e. rows
2. for the inner loop, focus on the columns & connect them somehow to the rows
3. print them "*" insie the inner for loop
4. observe symmetry [optional]
*/


#include <bits/stdc++.h>
using namespace std;
/*
****    0->4
****    1->4
****    2->4
****    3->4
*/
void print1(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

/*
*           1->1
**          2->2
***         3->3
****        4->4
*****       5->5
*/
void print2(int n){
    for(int i=1; i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}


/*
1           1->1
12          2->2
123         3->3
1234        4->4
12345       5->5
*/
void print3(int n){
    for(int i=1; i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}


/*
1           1->1
22          2->2
333         3->3
4444        4->4
55555       5->5
*/
void print4(int n){
    for(int i=1; i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}


int main(){
    
    print1(4);
    print2(5);
    print3(5);
    print4(5);


    return 0;
}