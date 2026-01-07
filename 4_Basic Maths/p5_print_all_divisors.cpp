// Print all divisors of a number
// eg.- divisors of 6 are 1,2,3,6

#include<bits/stdc++.h>
using namespace std;

int main()
{
    // method 1: O(n)
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    
    for(int i=1;i<=n;i++)
    {
        if(n%i==0) cout<<i<<" ";
    }



    
    // method 2: O(sqrt(n))
    cout<<"\nUsing optimized approach: "<<endl;
    int m;
    vector<int>v; // to store divisors
    cout<<"Enter the number: "; 
    cin>>m;
    
    for(int i=1;i<=sqrt(m);i++)
    {
        if(m%i==0) {                  // i is a divisor
            v.push_back(i);           // push i into vector
            if((m/i)!=i){             // to avoid duplicate entry when both divisors are same
                v.push_back(m/i);     // push m/i into vector
            }
        }
    }
    
    sort(v.begin(),v.end());    // sorting the vector to print divisors in order
    for(auto it:v){             // print all divisors
        cout<<it<<" ";
    }

    return 0;
}