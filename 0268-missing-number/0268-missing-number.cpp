class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_set<int>s;
        int maxNum=INT_MIN;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
            maxNum=max(maxNum , nums[i]);
        }

        for(int i=0;i<=maxNum+1;i++){
            if(s.find(i)==s.end())
            return i;
        }
        return 0;
    }
};