// #include<iostream>
// using namespace std;


// int fac(int n){

// if(n==0) return 1;

// else
// return (n*(fac(n-1 )));

// }

// int solution(){
// int j=2,sum=0,res=0;
// for(int i=0;i<=6;i++){

// res=((fac(26)/fac(i))/fac(i))*(fac(10)/fac(j));
// sum+=res;
// j++;


// }
// return sum;

// }

// int main(){

// int result=solution();

// cout<<"result: "<<result;
//     return 0;
// }


#include<iostream>
#include<math.h>
using namespace std;

long long int  fac(int n){
if(n==0||n==1) return 1;
else
return (n*(fac(n-1 )));
}

int main(){

int j=2;
long long int sum=0;
long long int res=0;
long long int res_total=0;
for(int i=2;i<=8;i++){
int k=8-i;
int m=10-i;
res=((fac(8)/fac(k)))*(fac(10)/(fac(m)*fac(i)));
res_total=res*pow(26,k);
sum+=res_total;
cout<<sum<<" "<<i<<endl;
j++; 

}
if(sum<0){
    cout<<"error"<<endl;
}
 
cout<<"result: "<<sum;
    return 0;
}