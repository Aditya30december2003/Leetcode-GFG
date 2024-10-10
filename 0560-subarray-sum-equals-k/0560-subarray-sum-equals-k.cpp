class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int , int>umap;
        int preSum=0;
        int total=0;
        umap[0]=1;
        for(int i=0;i<nums.size();i++){
            preSum+=nums[i];
            if(umap.find(preSum-k)!=umap.end()){
                total+=umap[preSum-k];
                umap[preSum]++;
            }
            else{
                umap[preSum]++;
            }
        }
        return total;
    }
};