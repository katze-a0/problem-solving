
// ## Problem 5: Sequence with Conditions
// Generate a sequence where each term is calculated as follows:
// - If the previous term is even: multiply it by 3 and add 1
// - If the previous term is odd: divide it by 2 (integer division)

// Starting with 10, find the sum of all terms until the sequence reaches 1 or exceeds 10000 terms.

// Example of first few terms:
// 10 → 31 → 15 → 7 → 3 → 1

#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    while(true){
    cout<<n<<"\t";
    if(n%2==0) n=n*3+1;
    else n/=2;
   
     if(n==1||n>=10000)
     {cout<<n; break;}
    }

    return 0;
}