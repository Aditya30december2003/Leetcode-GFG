class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set1(nums1.begin(), nums1.end());  // Store unique elements of nums1
        unordered_set<int> set2(nums2.begin(), nums2.end());  // Store unique elements of nums2
        
        vector<int> result1, result2;
        
        // Find elements in nums1 that are not in nums2
        for (int num : nums1) {
            if (set2.find(num) == set2.end()) {
                result1.push_back(num);
                set2.insert(num);  // To avoid duplicates in the result
            }
        }
        
        // Find elements in nums2 that are not in nums1
        for (int num : nums2) {
            if (set1.find(num) == set1.end()) {
                result2.push_back(num);
                set1.insert(num);  // To avoid duplicates in the result
            }
        }
        
        return {result1, result2};
    }
};
