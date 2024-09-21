class Solution {
public:
    void dfs(int current, int n, vector<int>& result) {
        if (current > n) return;  // If the current number exceeds n, backtrack
        result.push_back(current); // Add the current number to the result list
        
        // Try to explore numbers by appending digits (multiplying by 10)
        for (int i = 0; i < 10; ++i) {
            if (current * 10 + i > n) return;  // If the new number exceeds n, backtrack
            dfs(current * 10 + i, n, result);
        }
    }
    vector<int> lexicalOrder(int n) {
        vector<int> result;
        for (int i = 1; i < 10; ++i) {
            dfs(i, n, result);
        }
        return result;
    }
};