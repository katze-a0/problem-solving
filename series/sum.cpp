

// "Step Sum Sequence"
// Find the 10th number in the sequence where each number is the sum of its digits squared plus the previous number.
// Starting with 1:
// 1, (1² = 1 + 1 = 2), (2² = 4 + 2 = 6), (6² = 36 + 6 = 42)...

#include<iostream>
#include<math.h>
using namespace std;

int sumofDigitsSquared(int i){
 int rem;
 int sum=0;
    while(i!=0){
        rem=i%10;
        sum+=pow(rem,2);
        i/=10;
    }
    
    return sum;
   }
int stepSum(int i){

if(i==1){
    return (1);
}
if(i>=2){
   return sumofDigitsSquared(i);
}

return 0;
}


int main(){
int prev_value=0,output;
int n;
cin>>n;
for(int i=1;i<=10;i++){
    
    output=stepSum(output)+prev_value;
    if(i==1){
        output=1;
    }
    cout<<"Value of "<<i<<"\t"<<"position"<<":"<<output;
    
    prev_value=output;
    cout<<endl;
}
    return 0;
}