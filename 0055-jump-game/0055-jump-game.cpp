class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        vector<bool>t(n , false);
        t[0]=true;
        for(int i=0;i<n;i++){
            for(int j=i;j>=0;j--){
                if(t[j]==true && i<=j+nums[j]){
                    t[i]=true;
                    break;
                }
            }
        }
        return t[n-1];
    }
};