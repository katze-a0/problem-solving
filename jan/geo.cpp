// Geometric Sequence Problem:
// Consider a geometric sequence starting with 3 and having a ratio of 2: (3, 6, 12, 24, 48, ...). 
// Find the sum of all terms less than 1000 that are divisible by 6.
#include<iostream>
#include<math.h>
using namespace std;

int main(){

  int a=3,r=2;
  int sum=0,i=0;

  int term;
  while(term<1000){
    term=a*pow(r,i);
    if(term<1000&&term%6==0){
        sum+=term;
    }
    cout<<term<<" ";
  
    i++;
  }
    cout<<endl;
    cout<<"sum: "<<sum;
    return 0;
}