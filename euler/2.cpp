//palindrome



#include<iostream>
#include<string>
using namespace std;

bool palindrome_check(long long int num){
     int i=0;
    string st_num=to_string(num);
    int len=st_num.length();

    //even checking
    for(i=0;i<len/2;i++){
        if(!(st_num[i]==st_num[len-i-1])){
            return false;
        }
    }
    // else{     //odd checking
    //       for(i=0;i<len/2;i++){
    //     if(!(st_num[i]==st_num[len-i-1])){
    //         return false;
    //     }
    // }
    // }

    return true;
}

int main(){

long long int a=1,b=1,num,palindrome1;

for(int a=100;a<=999;a++){
    for(int b=a;b<=999;b++){
        num=a*b;
        if(num==906609){
            cout<<"found";
        }
        if(palindrome_check(num)&&num>palindrome1){
            palindrome1=num;
        }
       
    }
}
     if(palindrome_check(1001)){
            cout<<"checking logic"<<endl;
        }
cout<<"Largest palindrome num: "<<palindrome1;
 
    return 0;
}