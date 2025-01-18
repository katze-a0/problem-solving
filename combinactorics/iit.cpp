// Problem: It can be seen that the number, 125874, and its
// double, 251748, contain exactly the same digits, but in
//  a different order. Find the smallest positive integer, x, such that 2x, 3x,
//  4x, 5x, and 6x, contain the same digits.

#include<iostream>
#include<vector>
using namespace std;

int  main(){

   int x=125874;
   int y=251748;
   
 vector<int>v,v1;

 int i=0;
 while(x>0 && y>0){
    v.push_back(x%10);
    v1.push_back(y%10);
    x/=10;
    y/=10;
    
 }
 cout<<"check"<<endl;

 //lets print vector 


 //sort elements
//  for(int i=0;i<v.size();i++){
//     int temp;
//     if(v[i]>v[i+1]){
//         temp=v[i];
//         v[i]=v[i+1];
//         v[i+1]=temp;
//     }
//  }
//   cout<<"check"<<endl;
//   for(int i=0;i<v1.size();i++){
//     int temp;
//     if(v1[i]>v1[i+1]){
//         temp=v1[i];
//         v1[i]=v1[i+1];
//         v1[i+1]=temp;
//     }
//  }    

  // Here's the correct bubble sort
    for(int i = 0; i < v.size() - 1; i++) {
        for(int j = 0; j < v.size() - i - 1; j++) {
            if(v[j] > v[j + 1]) {
                swap(v[j], v[j + 1]);
            }
        }
    }

    for(int i = 0; i < v1.size() - 1; i++) {
        for(int j = 0; j < v1.size() - i - 1; j++) {
            if(v1[j] > v1[j + 1]) {
                swap(v1[j], v1[j + 1]);
            }
        }
    }

  cout<<"check sort "<<endl; 

   for(int num:v){
   cout<<num<<" ";
 }
 cout<<endl;
  for(int num:v1){
   cout<<num<<" ";
 }      
//  int size_temp=v.size();      
//  cout<<"size: "<<v.size();                           
//  while(i<v.size()){
//     int a,b;
//     a=v.back();
//      v.pop_back();
//      b=v1.back();
//   v1.pop_back();
//     if(a==b){
//     }
//    i++;
//  }
//   cout<<"check"<<endl; 
//  if(i==(size_temp-1)){
//     cout<<"same digits contained";
//  }
//  else{
//    cout<<"not same digits"<<endl;
//  }
bool same_digits=true;
for(int i=0;i<v.size();i++){
   if(v[i]!=v1[i]){
   same_digits=false;
   break;
   }
}
if(same_digits){
    cout<<"same digits contained"<<endl;
}
else{
     cout<<"not same digits"<<endl;
}
  cout<<"check"<<endl;
    return 0;
}