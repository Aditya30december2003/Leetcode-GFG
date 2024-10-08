class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int , int>umap;
        int count=0;
        int prefixSum=0;

        umap[0]=1; // initialze

        for(int i=0;i<nums.size();i++){
            prefixSum+=nums[i];
            if(umap.count(prefixSum-k)){
                count+=umap[prefixSum-k];
                umap[prefixSum]++;
            }
            else
            umap[prefixSum]++;
        }

        return count;
    }
};