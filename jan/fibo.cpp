#include<iostream>
using namespace std;

int main(){
long int a=1, b=2;
long int c=0;
long int sum=2;
    while(c<4000000){
        c=a+b;
        if(c%2==0){
            sum=sum+c;
        }
        a=b;
        b=c;
    }
    cout<<"sum="<<sum;
    return 0;
}