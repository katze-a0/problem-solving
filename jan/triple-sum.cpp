// Triple Sum Sequence:
// Create a sequence where each new term is the sum of the previous three terms, starting with 1, 2, 3. 
// Find the sum of all terms under 10,000 that are odd numbers.

#include<iostream>
#include<math.h>
using namespace std;

int main(){


    int a=1,b=2,c=3;
    int d=0;
    int sum=0;
    cout<<a<<" "<<b<<" "<<c<<" ";
    while(d<10000)
   {
d=a+b+c;
if((d%2!=0)&&d<10000){
    sum+=d;
}
cout<<d<<" ";
a=b;
b=c;
c=d;
   }
   cout<<endl;
   cout<<"Sum: "<<sum+4;
    return 0;
}
