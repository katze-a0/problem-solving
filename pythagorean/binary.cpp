
// ### Problem 4: Binary Factor Sum
// For a positive integer n, consider the sum of numbers formed by its binary factors.
// Example: 12 has factors 1,2,3,4,6,12
// Their binary forms: 1,10,11,100,110,1100
// Sum as integers: 1+2+3+4+6+12=28
// Find all numbers between 1 and 100 where this sum is a perfect cube.


//binary conversion

#include<iostream>
#include<math.h>
#include<vector>
using namespace std;


int factors(int n,  vector<vector<int>>& factor){
   vector<int> factors;  // temporary vector to store factors of current number
    
    // Find all factors of n
    for(int i = 1; i <= n; i++) {
        if(n % i == 0) {
            factors.push_back(i);
        }
    }   
        
    // Add the factors list to our vector of vectors
    factor.push_back(factors);
return 0;
}
  int binary(int n,vector<int> & v){
    if(n%2==0){
    v.insert(v.begin(),0);
    n/=2;
    }
    else{
        v.insert(v.begin(),1);
        n=(n-1)/2;
    }
    return n;
  }


int conversion(int n,vector<int>& v){
 while(n!=0){

    n=binary(n,v);
 }
    return n;
}
 bool cubeCheck(int sum){

    float float_a=pow(sum,1/3);
    int int_a=pow(sum,1/3);
    if((float_a-int_a)==0) return true;
    else return false;
 }


int main(){
    vector<vector<int>> factor;
    vector<vector<int>> v1;
    int n=1;
    int sum=0;
    int totalSumofCube=0;
   for(int i=1;i<=10;i++){

   factors(i,factor);
   
    
    }
//       for(auto i:factor){
//     if(i==0){
//         for(auto i:v1){
//             for(auto j:i){
//  i.insert(i.begin(),0);
//             }
//         }
  
//    }
//    else{
//     conversion(i,v1);
//   }
//    }
for(auto i:factor){
    for(auto j:factor[i]){
       
            if(i[j]==0){
                i.insert(i.begin(),0);
            }
            else{
              conversion(i[j],i);  
            }
        
    }
}   

cout<<"Factors:\n";
	for(int i=0;i<factor.size();i++){
		for(int j=0;j<factor[i].size();j++)
			cout<<factor[i][j]<<" ";
		cout<<endl;
	}
   
//   }cout<<endl;
//   cout<<"Sum of factors: "<<sum<<endl;
 
//   if( cubeCheck(sum)){
//     totalSumofCube+=sum;
//   }
//   cout<<"Binary: ";
//   for(auto i:v1){
//     for(auto j:i){
//         cout<<j;
//     }
//     cout<<"\t";
//   }
//   cout<<endl;
// }
// cout<<"Total Sum of all numbers between 1 and 100 where this sum is a perfect cube: "<<totalSumofCube;
   return 0;
}
 
