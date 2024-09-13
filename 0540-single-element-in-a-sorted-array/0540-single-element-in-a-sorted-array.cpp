class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        unordered_map<int , int>umap; // num->key

        for(int x:nums){
            umap[x]++;
        }

        for(auto x : umap){
            if(x.second ==1)
            return x.first;
        }
    return -1;
    }
};