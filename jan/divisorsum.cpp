#include<iostream>
#include<set>
using namespace std;

 int main(){
    set <int> a;
int num=1;
int i,sum=0;

while(num<10000){
for(i=1;i<num;i++){

if(num%i==0){
    sum+=i;
}

}
// cout<<"Sum = "<<sum<<endl;
// cout<<num;
if(sum==num){
    // cout<<num<<endl;
    a.insert(num);
  
}
sum=0;
num++;}
int k=0;
for(int j:a){
    cout<<j<<endl;
k++;
}
cout<<"perfect numbers in range: "<<k;
return 0;


 }