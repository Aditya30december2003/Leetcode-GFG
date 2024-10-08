class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        //umap
        unordered_map<int , int>umap;
        int count=0;
        int sumSub=0;

        umap[0]=1;

        for(int i=0;i<nums.size();i++){
            sumSub+=nums[i];
            int rem=sumSub%k;

            if(rem<0)
            rem=rem+k;

            if(umap.count(rem)){
            count+=umap[rem];
            umap[rem]++;
            }
            else
            umap[rem]=1;
        }
        return count;
    }
};