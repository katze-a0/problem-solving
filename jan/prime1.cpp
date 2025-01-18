#include<iostream>
#include<set>
using namespace std;

int main(){
set<int> a;

int num,sum=0;
cout<<"Enter num: ";
cin>>num;

if(num%2==0){  //inserting 2 it is only even prime now we cna check all odd prime 
    a.insert(2);
    num/=2;
}

for(int i=3;i<=num;i+=2){
    if(num%i==0){
        a.insert(i);
        num/=i;
    }
}

//calculating sum of each

for(int j:a){
    sum+=j;
}
cout<<"Sum : "<<sum;
    return 0;
}