

// # Sequence and Series Competition Problems

// ## Problem 1: Arithmetic Sequence Sum with Powers
// Consider an arithmetic sequence where each term is squared before being added to the sum. 
// The sequence starts with a=2 and has a common difference d=3. Find the sum of the squared terms 
// up to the point where any individual term (before squaring) exceeds 50.

// Example for first few terms:
// - First term: 2² = 4
// - Second term: 5² = 25
// - Third term: 8² = 64
// ...and so on.

#include<iostream>
#include<math.h>
using namespace std;

int square(int a){

  int value;
  value=pow(a,2);
  return value;
}

int main(){

   int a=2,sum=0;
   for(a=2;a<=50;a+=3){
    cout<<a<<"th term: "<<square(a)<<endl;
    sum+=square(a);
   }

   cout<<"Sum upto 50 terms :"<<sum<<endl;
    return 0;
}