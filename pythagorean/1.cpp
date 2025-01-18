// Problem 1: Perfect Square Sequence
// Given a sequence where each number is formed by adding the previous perfect square:
// 1, 5, 14, 30, 55, 91, ...
// (Formed by: 1, 1+4, 1+4+9, 1+4+9+16, ...)
// Find the sum of all terms in this sequence that are prime numbers and less than 1000.

#include<iostream>
#include<math.h>
#include<vector>
using namespace std;


bool checkprime(int n){
   int flag=0;
    
   for(int i=1;i<=n;i++){
    if(n%i==0) flag++;
   }
  if(flag==2)
    {return true;}
    else return false;
}
int main(){

  vector<int> v;
    int i=1,n;
    int sum=0;
     int totalprime=0;
    while(sum<1000){
     
     sum+=pow(i,2);
     if(checkprime(sum)){
        v.push_back(sum);
     }
     while(sum<1000)
     {cout<<sum<<" ";
     break;}
    i++;
    }
while(!v.empty()){
    int x=v.back();
    v.pop_back();
    totalprime+=x;
}
    cout<<"TotalSumofPrime: "<<totalprime<<endl;
    return 0;
}