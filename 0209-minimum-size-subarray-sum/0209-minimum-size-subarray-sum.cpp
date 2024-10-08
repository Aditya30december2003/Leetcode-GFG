class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int start=0 , end=0;
        int size=INT_MAX;
        int sum=0;

        while(end<nums.size()){
          sum+=nums[end];
          while(sum>=target){
            size=min(size , end-start+1);
            sum=sum-nums[start];
            start++;
          }
          end++;
        }
        return size==INT_MAX?0:size;
    }
};