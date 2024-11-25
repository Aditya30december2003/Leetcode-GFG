class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        if(n<=1) return 0;
        if(nums[0]==0) return -1;

        int farthest=0 , curr=0 , jump=0;

        for(int i=0;i<n-1;i++){
            farthest=max(farthest , i+nums[i]);

            if(i>=farthest) return -1;

            if(i==curr){
                curr=farthest;
                jump++;

                if(curr>=n-1) return jump;
            }
        }
        return -1;
    }
};