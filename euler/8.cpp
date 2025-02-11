
//highly divisible triangular number

#include<iostream>
#include<math.h>
using namespace std;

bool check_divisors(long long int sum_){

  long long int divisor,flag=0;
  long long int sqrt_num=sqrt(sum_);

  for(divisor=1;divisor<=sqrt_num;divisor++){
     
    if(sum_%divisor==0){
        if(sum_/divisor != divisor) {
           flag += 2;
        } else {
           flag += 1;
        }
    }
  }
  if(flag>500){
    cout<<"Required triangular number: "<<sum_;
    return true;
  }
    return false;
    
}

int main(){
    long long int i=1,n,sum=0;
  long long int current_flag;
    while(true){
  
   sum+=i;
    cout<<sum<<" ";
  if(check_divisors(sum)){
    break;
  }
//     current_flag= check_divisors(sum);
//   if(current_flag>500){
//     cout<<"Required triangular number: "<<sum;
//     break;
//   }
  
    i++;



    }

    return 0;
}
//ans -76576500