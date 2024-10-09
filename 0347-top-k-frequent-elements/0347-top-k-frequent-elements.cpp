class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>ans;
        unordered_map<int , int>umap; // num-->frq
        for(int&num:nums)
        umap[num]++;

        priority_queue<pair<int , int>>q;
        for(auto&x:umap)
        q.push({x.second , x.first});

        while(k--){
            auto temp=q.top();
            ans.push_back(temp.second);
            q.pop();
        }
        return ans;
    }
};