class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>ans(arr.size());
        set<int>unqElement;
        unordered_map<int , int>rankMap;

        for(auto num:arr){
            unqElement.insert(num); // sorted and unique
        }

        int rank=1;
        for(auto num:unqElement){
            rankMap[num]=rank++;
        }

        for(int i=0;i<arr.size();i++){
            ans[i]=rankMap[arr[i]];
        }
        return ans;
    }
};