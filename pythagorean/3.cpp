

// ### Problem 3: Digital Root Pattern
// The digital root of a number is found by continuously summing its digits until a single digit is reached.
// Example: 789 → 7+8+9=24 → 2+4=6
// Create a sequence where each term is the product of its position and its digital root.
// Find the sum of the first 100 terms that are perfect squares.
#include<iostream>
#include<math.h>
using namespace std;
int sumofdigits(int n){
    int result=0,sum=0;
    int rem=0;
    
   while(n!=0){
        rem=n%10;
        sum+=rem;
        n/=10;
       
}
return sum;}
int digitalRoot(int n){

    while(n>9){
        n=sumofdigits(n);
    }
    return n;
}
bool checkroot(int t){
   float f_a=pow(t,0.5);
   int i_a=pow(t, 0.5);
   if((f_a-i_a)==0){
   return true;                                              
   }
   else return false;
}

int main(){

  int i=1;
  int temp=0,sum=0;
  for(i=1;i<=100;i++){

   cout<<i*digitalRoot(i)<<endl;
   temp=i*digitalRoot(i);
   if(checkroot(temp))
   {
    sum+=temp;
   }
   
  }
  cout<<"Required sum of terms that are perfect squares: "<<sum;
    return 0;
}