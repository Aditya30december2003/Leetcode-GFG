class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int n = arr.size();
    
    // Step 1: Create the prefixXor array
    vector<int> prefixXor(n);
    prefixXor[0] = arr[0];
    for (int i = 1; i < n; ++i) {
        prefixXor[i] = prefixXor[i - 1] ^ arr[i];
    }

    // Step 2: Answer the queries
    vector<int> result;
    for (const auto& q : queries) {
        int left = q[0], right = q[1];
        if (left == 0) {
            result.push_back(prefixXor[right]);
        } else {
            result.push_back(prefixXor[right] ^ prefixXor[left - 1]);
        }
    }

    return result;
    }
};