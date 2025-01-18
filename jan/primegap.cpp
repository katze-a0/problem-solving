// ```
// Gap between 2 and 3 is 1
// Gap between 3 and 5 is 2
// Gap between 5 and 7 is 2
// ```

// **Task:** 
// 1. Find the largest prime gap between successive primes below 1000000
// 2. Count how many times this gap appears
// 3. Multiply these two numbers for the final answer

#include<iostream>
#include<iterator>
#include<set>
using namespace std;

int main(){
    set<int>a;
    set<int, greater<int>>d;
    a.insert(2);
    int maxdiff;
int num=3;
int flag=0;
while(num<100){

for(int i=2;i<num;i++){
    if(num%i==0) {flag++;}
}

if(flag==0){
    a.insert(num);
}
flag=0;
num++;}

set<int>::iterator it=a.begin();


// auto it=a.begin();
int prevNum=*it;
it++;
while(it!=a.end()){
cout<<*it<<endl;
int diff=*it-prevNum;
prevNum=*it;
it++;
d.insert(diff);

}
set<int>::iterator i=d.begin();
cout<<"Maximum difference= "<<*i<<endl;
cout<<"size="<<a.size();

    return 0;
}