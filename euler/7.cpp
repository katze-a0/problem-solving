

// //number with longest collatz sequence

// #include<iostream>
// using namespace std;

// void  check_length(long long int temp_, int i,int max_length){
   
//     if(i>max_length){
        
//         max_length=i;
//         cout<<"ok"<<endl;
//         cout<<temp_<<" "<<i<<endl;
      
//     }
    
//     }
    
// void collatz_check(long long int n,int i,int max_length){
//     int temp;
//     temp=n;
//  if(n%2==0){
//     n/=2;
//     i++;
//     collatz_check(n,i,max_length);
//  }
//  else if((n%2==1) && n>1) {
//     n=3*n+1;
//     i++;
//     collatz_check(n,i,max_length);
//  }

// else{check_length(temp,i,max_length);}

// }




// int main(){
//     int i=0;
//     int max_length=1;
//     long long int n;
//     for(n=2;n<4;n++){
//       collatz_check(n,i,max_length);
//     }
//     // 1000000
//     cout<<endl;
// cout<<"n: "<<n;
//     return 0;
// }  ----> aloo code 


#include <iostream>
using namespace std;

int collatz_length(long long n) {
    int length = 1;
    while (n != 1) {
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = 3 * n + 1;
        }
        length++;
    }
    return length;
}

int main() {
    int max_length = 0;
    long long max_number = 0;

    for (long long n = 2; n < 1000000; n++) {
        int current_length = collatz_length(n);
        if (current_length > max_length) {
            max_length = current_length;
            max_number = n;
        }
    }

    cout << "Number with longest Collatz sequence: " << max_number << endl;
    cout << "Length of sequence: " << max_length << endl;

    return 0;
}