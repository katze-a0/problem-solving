// Find the smallest positive integer x where x and 3x use exactly the same digits.
// (Similar to original but simpler since only checking one multiple)

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool checkNumber(long long  n){

long long  n1=n*3;
string a=to_string(n);
string b=to_string(n1);

if(a.length()!=b.length()){
    return false;  //easy exit
}
sort(a.begin(),a.end());
sort(b.begin(),b.end());

for(int i=0;i<a.length();i++){
    if(a[i]!=b[i]){
        return false;
    }
}
return true;
}


int main(){
    long long n=1;
    int i=0;
    
    while(true){ 
   if(checkNumber(n)){
    cout<<"Same digits:"<<n<<"--"<<n*3;
    break;
   }
   i++;
   n++;}

    return 0;
}