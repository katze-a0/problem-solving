
//pallindrome 2x to 6x

#include<iostream>

using namespace std;

 int callPallindrome(long long int x,long long int n){
string a=to_string(n);
if(a.length()==1){
    return x==n;
}
for(int i=0;i<a.length()/2;i++){
    if(a[i]!=a[a.length()-1-i]) return false;
}
    return 0;
}

bool checkNumber(long long int x){

for(int i=2;i<=6;i++){
   if(callPallindrome(x,x*i)){
   if(i==6) return true;
   }
   else return false;
}
     return true;
}



int main(){
   long long int x=1;
   while (true){
  
    if(checkNumber(x))
    {cout<<"Smallest x : "<<x<<endl;
    break;
    }

x++;
   }
    return 0;
}