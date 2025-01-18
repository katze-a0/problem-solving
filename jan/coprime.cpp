// ## Problem 5: Coprime Chain
// Two numbers are coprime if their greatest common divisor (GCD) is 1.
// A coprime chain is a sequence where each number is coprime with the next number.

// **Example:**
// ```
// [2,3,5] is a valid chain because:
// - GCD(2,3) = 1
// - GCD(3,5) = 1
// ```

// **Task:** Find the length of the longest possible coprime chain using numbers from 1 to 100 where:
// - Each number must be coprime with the next number
// - Difference between any two consecutive numbers must not exceed 5

#include<iostream>
#include<set>
#define NUMBER 10
using namespace std;

int main(){

    set<int> a[NUMBER];
  
    int num=1;

    while(num<=10){

    for(int j=0;j<10;j++){
    for(int i=1;i<=num;i++){
        if(num%i==0){
            a[j].insert(i);
        }
    }
    
    num++;}}

    cout<<"list of divisors:"<<endl;
    for(int k=0;k<=NUMBER-1;k++){

       
      
    for(auto it:a[k]){
        cout<<it<<" ";
    }
    cout<<endl;}
    

    return 0;
}