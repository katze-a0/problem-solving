// ### Problem 5: Circular Prime Rotation
// A number is a circular prime if all rotations of its digits are prime.
// Example: 197 rotations are 197, 971, 719 - all prime
// Create a sequence where each term is formed by concatenating two consecutive circular primes.
// Example: 197 and 719 form 197719
// Find the sum of the first 10 terms in this sequence that are themselves prime.

#include<iostream>
#include<string>
#include<math.h>
using namespace std;


int main(){

   int n,i=0;
   cin>>n;
   string num=to_string(n);
   cout<<num<<endl;
   int temp1,temp2;
   string temp="";
//    Integer.parseInt(strNumber); java ko lagi yo chai
   while(i<(num.length()-1)){
     
     temp1=num[0];
     num[0]=num[1];
     num[1]=num[2];
     num[2]=temp1;
     
    cout<<num[0]<<num[1]<<num[2];
    
    cout<<endl;
     i++;
   }
   

    return 0;
}



