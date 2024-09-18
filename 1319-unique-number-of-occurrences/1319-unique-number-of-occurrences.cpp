class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int , int>umap; // num->freq
        for(int &x:arr){
            umap[x]++;
        }
        unordered_set<int>s; // we will fill the freq
        for(auto &x:umap){
            if(s.find(x.second)!=s.end())
            return false;
            else
            s.insert(x.second);
        }

        return true;
    }
};