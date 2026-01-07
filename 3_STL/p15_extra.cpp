// we will see more examples of algorithms like builtin popcount(), permuatations  and max_element etc.


#include<bits/stdc++.h>
using namespace std;

void example_algorithms(){

    /* Builtin popcount: counts the no. of 1s of a number in binary*/

    int n=10; // binary representation of 10 is 1010 which has 2 ones
    int count = __builtin_popcount(n); // returns 2
    cout<<count<<endl; // prints 2





    /* Permutation : all possible combinations */
    string s = "123";
    sort(s.begin(), s.end()); // sorting the string to get the lexicographically smallest permutation
    do{
        cout<<s<<endl; // prints all permutations of string s
    }while(next_permutation(s.begin(), s.end())); // generates next permutation in lexicographical order

    // output:
    // 123
    // 132
    // 213
    // 231
    // 312
    // 321




    /* max_element and min_element : returns iterator to the maximum and minimum element in the range */
    int arr[] = {5, 2, 8, 1, 3};
    auto max_it = *max_element(arr, arr + 5); // returns iterator to the maximum element
    auto min_it = *min_element(arr, arr + 5); // returns iterator to the minimum element
    cout<<max_it<<endl; // prints 8
    cout<<min_it<<endl; // prints 1
}

int main(){
    example_algorithms();
    return 0;
}