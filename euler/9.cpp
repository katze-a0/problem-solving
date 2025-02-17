

// //1 to one problem 

// #include<iostream>
// #include<math.h>
// #include<map>
// using namespace std;

// int main(){

//   int num;
// //    char a[10][50]={
// //     "one","two","three"
// //    };
// map<int, string> mp;

// mp[1] = "one";
// // mp["two"] = 2;
// // mp["three"] = 3;

// map<int, string>::iterator it=mp.begin();
// cout<<"hi"<<" ";
// cin>>num;
// cout<<it->first<<" ";
// if(it->first==1)
// {
//     cout<<"found...";
// }


// //    if(num == ){

// //    }

//     return 0;
// }


#include <iostream>
#include <string>
#include <map>
using namespace std;

class NumberToWords {
private:
    map<int, string> units = {
        {0, ""}, {1, "one"}, {2, "two"}, {3, "three"}, {4, "four"},
        {5, "five"}, {6, "six"}, {7, "seven"}, {8, "eight"}, {9, "nine"},
        {10, "ten"}, {11, "eleven"}, {12, "twelve"}, {13, "thirteen"}, 
        {14, "fourteen"}, {15, "fifteen"}, {16, "sixteen"}, 
        {17, "seventeen"}, {18, "eighteen"}, {19, "nineteen"}
    };
    
    map<int, string> tens = {
        {2, "twenty"}, {3, "thirty"}, {4, "forty"}, 
        {5, "fifty"}, {6, "sixty"}, {7, "seventy"}, 
        {8, "eighty"}, {9, "ninety"}
    };

public:
    string convertToWords(int num) {
        if (num == 1000) return "one thousand";
        
        string result = "";
        
        // Handle hundreds
        if (num >= 100) {
            result += units[num/100] + " hundred";
            num %= 100;
            if (num > 0) result += " and ";
        }
        
        // Handle tens and units
        if (num >= 20) {
            result += tens[num/10];
            if (num % 10 > 0) {
                result += "-" + units[num % 10];
            }
        } else if (num > 0) {
            result += units[num];
        }
        
        return result;
    }
    
    int countLetters(string word) {
        int count = 0;
        for (char c : word) {
            if (isalpha(c)) count++;
        }
        return count;
    }
    
    int getTotalLetterCount(int start, int end) {
        int totalCount = 0;
        for (int i = start; i <= end; i++) {
            string word = convertToWords(i);
            totalCount += countLetters(word);
        }
        return totalCount;
    }
};

int main() {
    NumberToWords converter;
    
    // Test for first 5 numbers (verification)
    cout << "First 5 numbers letter count: " 
         << converter.getTotalLetterCount(1, 5) << endl;
    
    // Get count for 1 to 1000
    cout << "Total letters from 1 to 1000: " 
         << converter.getTotalLetterCount(1, 1000) << endl;
    
    return 0;
}