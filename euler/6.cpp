

#include<iostream>
#include<math.h>
#include<string.h>

using namespace std;


 unsigned long long int sumDigit(long long int num){
// char  a[]=to_string(num);
string a=to_string(num);
int i=0;
unsigned long long int sum=0;
int len=size(a);
unsigned long long int rem;
// while(i!=len){
//     cout<<sum<<endl;
// sum=sum+a[i];
// cout<<i<<":"<<a[i]<<endl;
//     i++;
// }
while(num!=0){
    rem=num%10;
    sum+=rem;
    num/=10;
    
}
cout<<sum<<endl;
return sum;
}


int main(){
 unsigned long long int x;
//   x=pow(2,1000);
x=static_cast<unsigned long long int>(pow(2,100));
cout<<x<<endl;
  unsigned long long result=sumDigit(x);
  cout<<"Ans: "<<result;
   
   

    return 0;
}

//it summs ASCII value not the actual numerical value ..

//right code 
#include <iostream>
#include <string>
using namespace std;

// This function takes a string like "24" and multiplies it by 2 giving "48"
string multiplyBy2(string number) {
    int carry = 0;  // We use this to carry over numbers like in regular multiplication
    
    // Go through each digit from right to left (like how we multiply on paper)
    for (int i = number.length() - 1; i >= 0; i--) {
        // Convert character to number, multiply by 2, and add any carried number
        int digit = (number[i] - '0') * 2 + carry;
        
        // Put the last digit in our result
        number[i] = (digit % 10) + '0';
        
        // Carry over the first digit (if any)
        carry = digit / 10;
    }
    
    // If we have any number left to carry, put it at the front
    if (carry > 0) {
        number = to_string(carry) + number;
    }
    
    return number;
}

int main() {
    string result = "1";    // Start with 1
    int power = 100;        // We want 2^100
    
    // Multiply by 2 repeatedly
    for (int i = 0; i < power; i++) {
        result = multiplyBy2(result);
    }
    
    cout << "2^100 = " << result << endl;
    
    // Now sum all digits
    long long sum = 0;
    for (char digit : result) {
        sum += (digit - '0');  // Convert char to number and add to sum
    }
    
    cout << "Sum of digits: " << sum << endl;
    
    return 0;
}