// Problem 2: Alternating Digit Sum
// Consider numbers formed by alternating between adding and multiplying digits:
// For example: 2345 = 2 + 3 × 4 + 5 = 19
// Find all numbers between 1000 and 9999 where this alternating sum equals the sum of the number's prime factors.
// Example: If 1234 has prime factors 2, 617, then sum = 619

//finding prime factors 

#include<iostream>
#include<set>
using namespace std;


int main(){
  set<int> s;

   for(int i=10;i<=20;i++){
   for(int j=2;j<i;j++){
    cout<<"loop";
        if(i%j==0) {
        cout<<"check";
        i/=2;
        s.insert(j);
    }
    if(i==j) break;
    
   }
   }
    for(int i=10;i<=20;i++){
    cout<<"Prime factors of "<<i<<"\t";
    for(auto j:s){
        cout<<j<<" ";
    }
    cout<<endl;
  }
  

    return 0;
}