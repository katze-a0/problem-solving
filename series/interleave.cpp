// ## Problem 4: Interleaved Sequences
// Consider two sequences:
// - Sequence A: Arithmetic sequence starting at 2 with difference 3
// - Sequence B: Geometric sequence starting at 3 with ratio 2

// Create an interleaved sequence by alternating between the sequences (A1, B1, A2, B2, A3, B3...). 
// Find the sum of all terms in this interleaved sequence that are prime numbers, until you've used the
//  first 10 terms from each original sequence.


#include<iostream>
#include<math.h>
using namespace std;

int checkPrime(int num){

int flag=0;
for(int i=1;i<=num;i++){
    if(num%i==0) {flag++;
   
}}
return flag;}

int main(){

int a=2,d=3,sum=0;
 int b=3,r=2;
int i=1;
while(i<=10){

    cout<<"Sequence: "<<a<<" "<<b<<" ";

   checkPrime(a);
   if(checkPrime(a)==2) sum+=a;
   checkPrime(b);
   if(checkPrime(b)==2) sum+=b;
    a+=d;
    b=3*pow(2,i);
    i++;
}
cout<<"Sum required for all primes n: "<<sum;
return 0;
}













