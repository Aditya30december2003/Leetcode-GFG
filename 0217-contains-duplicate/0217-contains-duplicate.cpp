class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int , int>umap;
        for(int&num:nums){
            umap[num]++;
        }
        for(auto&x:umap){
            if(x.second>1)
            return true;
        }
        return false;
    }
};