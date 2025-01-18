#include<iostream>


using namespace std;

int main(){
//Find the sum of all distinct prime factors of 13195
//sum of divisors of 10 aaayo
int i=0,sum=0;
for(i=1;i<=10;i++){

if(10%i==0){
    sum+=i;
}

}
cout<<"Sum = "<<sum;

return 0;
}