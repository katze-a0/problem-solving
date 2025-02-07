//finding 10001st prime number

#include<iostream>
#include<vector>
using namespace std;


bool prime(long long int n,vector<int> &vec){
   int flag=0;

   for(long long int i=1;i<=n;i++){
    if(n%i==0){
    flag++;
    }
    
   }

    if(flag==2){
        vec.push_back(n);
        return true;
    }
    else return false;

 

    
}
int main(){
  vector<int> vec;
  long long int n=2,i=0,setnum;
  cout<<"ok";
  while(i<=10001)
  {
  
    if(prime(n,vec)){
        setnum=n;
    i++;}
   if(i==10001) break;
    n++;
  }
  
    cout<<"10001st prime number : "<<setnum<<endl;
    return 0;
}

//ans-104743