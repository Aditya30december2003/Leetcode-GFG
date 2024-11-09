class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int , int>umap; // num-->freq
        for(int&num:nums){
            umap[num]++;
        }
        priority_queue<pair<int , int>>q; //freq-->num
        for(auto&x:umap){
            q.push({x.second , x.first});
        }

        vector<int>ans;
        while(k--){
            ans.push_back(q.top().second);
            q.pop();
        }
    return ans;
    }
};