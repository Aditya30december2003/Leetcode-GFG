class Solution {
public:
    int findMin(vector<int>& nums) {
        if (nums.empty()) return -1;  // Handle empty array case

        int start = 0, end = nums.size() - 1;
        int minNum = nums[0];  // Initialize minNum to the first element
        
        while (start <= end) {
            int mid = start + (end - start) / 2;
            
            // Update minNum to the minimum of nums[start], nums[mid], and nums[end]
            minNum = min(minNum, nums[mid]);
            
            if (nums[mid] >= nums[start]) {
                // The left part is sorted
                minNum = min(minNum, nums[start]);
                start = mid + 1;
            } else {
                // The right part is sorted
                minNum = min(minNum, nums[mid]);
                end = mid - 1;
            }
        }
        
        return minNum;
    }
};
