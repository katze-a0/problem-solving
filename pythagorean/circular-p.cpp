// / Problem 5: Circular Prime Rotation
// // A number is a circular prime if all rotations of its digits are prime.
// // Example: 197 rotations are 197,  719, 971 - all prime
// // Create a sequence where each term is formed by concatenating two consecutive circular primes.
// // Example: 197 and 719 form 197719
// // Find the sum of the first 10 terms in this sequence that are themselves prime.

#include <iostream>
#include <vector>
using namespace std;

bool isPrime(long long n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    
    for (long long i = 5; i * i <= n; i += 6) { 
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

string rotateCircular(string s) {
    return s.substr(1) + s[0];
}

bool isCircularPrime(long long n) {
    if (!isPrime(n)) return false;
    if (n < 10) return true;
    string s = to_string(n);
    string rotated = s;
    for (long long i = 0; i < s.size(); i++) {
        rotated = rotateCircular(rotated);
        if (!isPrime(stoll(rotated))) return false;
    }
    return true;
}

int getNextCircularPrime(long long n) {
    int next = n + 1;
    while (!isCircularPrime(next)) {
        next++;
    }
    return next;
}

int main() {
    int term = 0;
    int i = 2;
    const int a = 999331;
    vector<long long> terms; 
    while (term < 10) {
        if (isCircularPrime(i)) {
            int next = getNextCircularPrime(i);
            try {
                long long newTerm = stoll(to_string(i) + to_string(next)); 
                
                if (isPrime(newTerm)) {
                    terms.push_back(newTerm);
                    cout << term << " " << newTerm << endl;
                    term++;
                }
            } catch (const out_of_range& e) {
                cout << "Out of range" << endl;
                cout << "Error:" << i << " " << next << endl;
            }
            i = next;
        }
        else {
            i++;
        }
    }

    long long sum = 0;
    for (auto& t : terms) {
        sum += t;
    }
    cout << "Sum of the first 10 terms: " << sum << endl;
    return 0;
}