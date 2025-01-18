// ## Problem 4: Digital Root Factors
// The digital root of a number is found by repeatedly summing its digits until a single digit is obtained.

// **Example:**
// ```
// For 789:
// 7 + 8 + 9 = 24
// 2 + 4 = 6
// Digital root is 6
// ```

// **Task:** Find the sum of all numbers from 1 to 10000 where:
// 1. The number is divisible by its digital root
// 2. The number has exactly 4 factors (including 1 and itself)

// #include<iostream>
// using namespace std;

// int main(){
//  int num=1,sum=0;

//  while(num<100){
// int temp;
// for(int i=1;i<=100;i++){
//     int var=num;
// if(num!=0){
//     temp=num%10;
//    sum+=temp;
//    num=num/10;
// }   cout<<"Sum of num"<<var<<":"<<sum<<endl; 
// sum=0; 
//  }
//  num++;
//  }
// return 0;
// }

#include<iostream>
#include<set>
using namespace std;

int main(){
int num=1;
set<int> a;
int rem,sum=0;
while(num<=1000){
int temp=num;
while(temp!=0){
rem=temp%10;
sum+=rem;
temp/=10;
}
cout<<"Sum of "<<num<<" "<<"is"<<" "<<sum<<endl;
if(num%sum==0){
    a.insert(num);

}
rem=0;
sum=0;

num++;}
 set<int>::iterator it=a.begin();
 cout<<"Printing numbers which are divisibe by its sumNum:";
 for(auto i:a){
    cout<<i<<endl;
 }
 int flag=0;
 cout<<"Numbers with exactly four factors out of them:"<<endl;
 for(auto i:a){
 for(int j=1;j<=i;j++){
    if(i%j==0){
        flag++;
    }
 }
 if(flag==4){
    cout<<"4 factor num:"<<i<<endl;
 }
 flag=0;
 }
 cout<<"Size of set"<<a.size();
 return 0;
}