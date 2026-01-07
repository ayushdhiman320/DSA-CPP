// Find GCD or HCF of two numbers


#include <bits/stdc++.h>
using namespace std;

int main()
{

    /* Bruteforce method*/

    // using incremental approach  (O(min(a,b)) )
    int a,b;
    int gcd=1;
    cout<<"Enter a and b: ";
    cin>>a>>b;
    
    for(int i=1;i<=min(a,b);i++)
    {
        if(a%i==0 && b%i==0) gcd=i;
    }
    cout<<"GCD of "<<a<<" and "<<b<<" is "<<gcd<<endl;


    // using decremental approach ( O(min(m,n)) )
    int n,m;
    int gcd1=1;
    cout<<"Enter a and b: ";
    cin>>m>>n;
    
    for(int i=min(m,n);i>=1;i--)  // much faster than incremental approach for large numbers
    {
        if(m%i==0 && n%i==0){
            gcd1=i;
            break;
        }
    }
    cout<<"GCD of "<<m<<" and "<<n<<" is "<<gcd1;







    /* Optimized method: Euclidean Algorithm ( O(log(min(a,b))) ) */
    // formula: GCD(a,b) = GCD(a%b, b) or GCD(a,b) = GCD(a, b%a)
    int p, q;
    cout<<"Enter a number: ";
    cin>>p>>q;
    
    while(p>0 && q>0){
        if(p>q) p=p%q;
        else q=q%p;
    }
    if(p==0) cout<<"GCD is "<<q;
    else cout<<"GCD is "<<p;

}