// Online C++ compiler to run C++ program online
#include <iostream>
#include<math.h>
using namespace std; 

bool prime(long int n){
    
    int flag=0;
    for(long int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            flag++;
        }
        
    }
    if(flag==0)  
        {return true;}
        
     return false;
    
    
}

int main() {
     long int sum=0,i=2;
     for(long int i=2;i<2000000;i++){
         if(prime(i)){
             sum+=i;
         }
     }
     cout<<"Required sum:"<<sum<<endl;
cout<<sizeof(int);cout<<endl;
cout<<sizeof(long long int)<<endl;
    return 0;
}

//142913828922