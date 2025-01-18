#include<iostream>
#include<set>
using namespace std;
 //perfect number check

 int main(){

// ## Problem 2: Perfect Divisor Count
// A number is called 'perfect' if it equals the sum of its proper divisors (divisors excluding the number itself).

// **Example:**
// ```
// For number 28:
// - Proper divisors are 1,2,4,7,14
// - Sum = 1 + 2 + 4 + 7 + 14 = 28
// Therefore, 28 is a perfect number
int num;
cout<<"Enter a number:";
cin>>num;
int i=0,sum=0;
for(i=1;i<num;i++){

if(num%i==0){
    sum+=i;
}

}
cout<<"Sum = "<<sum<<endl;
cout<<"hi\t";
cout<<num;
if(sum==num){
    cout<<"Perfect number ";
}

return 0;


 }
