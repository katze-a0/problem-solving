
// ## Problem 3: Modified Fibonacci Challenge
// Create a modified Fibonacci sequence where each new term is the sum of the previous three terms
//  (instead of two). Starting with 1, 2, 3, find the sum of all terms that are divisible by both 
//  3 and 4 until a term exceeds 1,000,000.
                                                
// Example of first few terms:
// 1, 2, 3, 6, 11, 20, 37...

#include<iostream>
using namespace std;

int main(){
 int a=1,b=2,c=3;
 int sum=0;
 int d;
 cout<<a<<" "<<b<<" "<<c;
 while(d<=1000000){
    d=a+b+c;
    cout<<d<<endl;
    if(d%3==0&&d%4==0){
        sum+=d;
    }
    a=b;
    b=c;
    c=d;

 }
cout<<"Sum of all terms divisible by 3 and 4: "<<sum+3<<endl;
  
return 0;
}