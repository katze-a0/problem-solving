
#include<iostream>
#include<vector>
using namespace std;

long long calculate_sumofSquare(){
    long long int sumofSquare=0;
 for(int i=1;i<=100;i++){
    
     sumofSquare+=i*i;
 }
 return sumofSquare;
    
}

long long calculate_squareofSum(){
  
   long long int squareOfSum=0,sum=0;
   for(int i=1;i<=100;i++){

             sum+=i;
   }
   squareOfSum=sum*sum;
   return squareOfSum;

}

int main(){

  long long int sumofSquare=0,squareOfSum=0,difference=0;
  
  calculate_sumofSquare();
  calculate_squareofSum();
  difference= calculate_squareofSum()-calculate_sumofSquare();
  cout<<"Required difference: "<<difference;

    return 0;
}