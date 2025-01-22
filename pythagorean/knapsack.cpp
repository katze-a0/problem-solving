//knapsack type problem ball selection 
 #include <iostream>
#include <vector>
#include <map>

using namespace std;

int combination(int n, int k) {
    if (k > n) return 0;
    vector<vector<int>> dp(n + 1, vector<int>(k + 1, 0));

    for (int i = 0; i <= n; ++i) {
        dp[i][0] = 1; // C(i, 0) = 1
    }
                                                         
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= k; ++j) {
            dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
        }
    }
    return dp[n][k];
}

int selectBallsWithConstraints(int r, vector<int>&balls, map<int, int> colorMap) {
    int uniqueColors = colorMap.size();
    vector<int> select(r+1, 0);
    select[0] = 1;

    for(auto& color : colorMap) {
        int colorCount = color.second;
        for(int i = 0; i <= r; i++) {
            for(int j = 0; j <= min(colorCount, 3) && i + j <= r; j++) {
                select[i+j] += select[i] * combination(colorCount, j);
            }
        }
    }
    return select[r];
}

int main() {
    vector<int> s = {1,1,3,3,4,4,4,4,2,5};
    map<int, int> colorMap;
    for (int i = 0; i < s.size(); i++) {
        colorMap[s[i]]++;
    }

    int result = selectBallsWithConstraints(5,s, colorMap);
    cout << result << endl;
    return 0;
}