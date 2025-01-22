#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void facts(int n, vector<vector<int>>& f) {
    vector<int> cf;  // current factors
    for(int i = 1; i <= n; i++) {
        if(n % i == 0) {
            cf.push_back(i);
        }
    }
    f.push_back(cf);
}

int bin(int n, vector<int>& v) {
    if(n == 0) {
        v.insert(v.begin(), 0);
        return 0;
    }
    if(n % 2 == 0) {
        v.insert(v.begin(), 0);
        return n/2;
    }
    else {
        v.insert(v.begin(), 1);
        return (n-1)/2;
    }
}

void conv(int n, vector<int>& v) {
    if(n == 0) {
        v.push_back(0);
        return;
    }
    while(n != 0) {
        n = bin(n, v);
    }
}

int main() {
    vector<vector<int>> f;  // factors
    vector<vector<vector<int>>> b;  // binary numbers
    
    // Get factors for numbers 1 to 10
    for(int i = 1; i <= 10; i++) {
        facts(i, f);
    }
    
    // Convert each factor to binary
    for(int i = 0; i < f.size(); i++) {
        vector<vector<int>> cb;  // current binaries
        for(int j = 0; j < f[i].size(); j++) {
            vector<int> br;  // binary representation
            conv(f[i][j], br);
            cb.push_back(br);
        }                                                
        b.push_back(cb);
    }

    // Print results
    cout << "Numbers and binaries:" << endl;
    for(int i = 0; i < f.size(); i++) {
        cout << "Number " << i+1 << ":" << endl;
        cout << "Factors: ";
        for(int j = 0; j < f[i].size(); j++) {
            cout << f[i][j] << " ";
        }
        cout << "\nBinary: ";
        for(int j = 0; j < b[i].size(); j++) {
            cout << "\n" << f[i][j] << ": ";
            for(int k = 0; k < b[i][j].size(); k++) {
                cout << b[i][j][k];
            }
        }
        cout << "\n\n";
    }

    return 0;
}