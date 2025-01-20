

//conversion to binary

#include<iostream>
#include<math.h>
#include<vector>
using namespace std;

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

int main(){
    vector<int> v;
int n;
cin>>n;
if(n==0){
   v.push_back(0);
}
else{
    conversion(n,v);
}
for(int digit: v){
    cout<<digit;
}
    return 0;
}