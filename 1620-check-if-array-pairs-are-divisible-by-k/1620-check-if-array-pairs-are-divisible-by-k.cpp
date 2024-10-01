class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        // Frequency map to store remainder counts
        unordered_map<int, int> remainderCount;
        
        // Count remainders of elements when divided by k
        for (int num : arr) {
            int rem = ((num % k) + k) % k;  // Handle negative numbers
            remainderCount[rem]++;
        }

        // Now, check if the pairs can be formed
        for (auto& entry : remainderCount) {
            int rem = entry.first;
            int count = entry.second;
            
            // Special case for remainder 0, it needs to form pairs within itself
            if (rem == 0) {
                if (count % 2 != 0) {
                    return false;  // If odd, we can't form pairs
                }
            } else {
                int complement = k - rem;
                // The count of elements with remainder `rem` should match `k - rem`
                if (remainderCount[rem] != remainderCount[complement]) {
                    return false;
                }
            }
        }
        
        return true;
    }
};
