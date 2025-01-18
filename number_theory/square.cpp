// Find the smallest number that contains the same digits when squared.
// (Variation that looks at powers instead of multiples)

#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

bool checkSquare(long long  n){

    string a=to_string(n);
    string b=to_string(pow(n,2));
     
    if(a.length()!=b.length()){
        return false;
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    for(int i=0;i<a.length();i++){
        if(a[i]!=b[i]){ return false;}
    }

    return true;
}


int  main(){
long long  n=1;
// long long n2 = 12345;  //pow should not be used in this case ---inaccurate result dinxa in power form
// cout << pow(n2,2) << endl;    // Using pow()
// cout << n2 * n2 << endl;       // Using direct multiplication
// These might give different results for larger numbers 
while(true){
if(checkSquare(n)){
    cout<<"Number containing same digits on squaring: "<<n<<"---"<<pow(n,2);
    break;
}
n++;
}
    return 0;
}