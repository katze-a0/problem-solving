#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

bool haveSameDigits(long long a, long long b) {
    string s1 = to_string(a);
    string s2 = to_string(b);
    
    if (s1.length() != s2.length()) return false;
    
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    
    return s1 == s2;
}

bool checkNumber(long long n) {
    vector<long long> m;
    
    for (int i = 2; i <= 6; i++) {
        m.push_back(n * i);
    }
    
    for (const auto& x : m) {
        if (!haveSameDigits(n, x)) return false;
    }
    
    return true;
}

int main() {
    long long n = 1;
    
    while (true) {
        if (checkNumber(n)) {
            cout << "The smallest number that satisfies the condition is: " << n << endl;
            
            for (int i = 2; i <= 6; i++) {
                cout << i << "x = " << (n * i) << endl;
            }
            break;
        }
        n++;
    }
    
    return 0;
}