

//a b c product =1000 , set of pythagorean numbers

#include<iostream>
#include<math.h>
using namespace std;

bool pythagoras(int a,int b, int c){

int p=pow(a,2)+pow(b,2);
int q=pow(c,2);
if(p==q){
    return true;
}
return false;
}

bool sum(int a,int b,int c){

if((a+b+c)==1000){
    return true;
}
return false;
}


int product(int a,int b,int c){

    int result=a*b*c;
    cout<<"Final result: "<<result;
  return 0;
}

int main(){

int a,b,c;
 cout<<"loop";
for(int a=1;a<1000;a++){
    for(int b=1;b<1000;b++){
        if((a+b)<1000)
       { for(int c=1;c<1000;c++){
       cout<<"0"<<"1";
           if(pythagoras(a,b,c) && sum(a,b,c))
        {product(a,b,c);}
          }   }
    }

}
    return 0;
}