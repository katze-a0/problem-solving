// Problem 2: Geometric Sequence Pattern Match
// Start with a geometric sequence where a=3 and r=2. Generate terms until you exceed 1000. 
// For each term in this sequence, count how many digits in that term are even numbers. 
// Find the sum of all terms in the sequence that have exactly 2 even digits.
// Example of digit counting:

// 3 has 0 even digits
// 6 has 1 even digit
// 12 has 1 even digit
// 24 has 2 even digits
// ...and so on.
#include<iostream>
#include<math.h>
using namespace std;


int checkEven(int a){

int rem,flag=0;
while(a!=0){
    rem=a%10;
    if(rem%2==0) {flag++;}
    a/=10;
}
return flag;

}
int main(){

   int a=3,r=2,sum=0;
    int i=0;
   while(a<=1000){
   
    cout<<(i+1)<<"th term :"<<3*pow(r,i)<<endl;
    a=3*pow(2,i);
    //checkEven
    cout<<"No. of even digits: "<<checkEven(a)<<endl;
    if(checkEven(a)==2){
        sum+=a;
    }
  
   i++;
   }
     cout<<"Sum of all terms with flag==2 :"<<sum;

    return 0;
}