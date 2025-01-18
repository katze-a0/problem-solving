//factorial for permutation
//in case no letters are repeated , arrangement= permutation which is n!.
#include<iostream>
using namespace std;

int fac(int n){
    if(n==1){
        return 1;
    }
    else{
        return (n*(fac(n-1)));
    }
}

int main(){
   int n;
   cin>>n;
   cout<<"Distinct arrangement:"<<fac(n)<<endl;
    return 0;
}