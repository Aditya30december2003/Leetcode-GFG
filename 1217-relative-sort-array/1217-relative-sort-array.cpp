class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
       vector<int>ans;

       map<int , int>map;
       for(auto x : arr1)
       map[x]++;

       for(auto x : arr2){
         if(map.find(x) != map.end()){
            auto index = map.find(x);

            int count = index->second; //5->2
            vector<int>v(count , x); // 5, 5
            ans.insert(ans.end() , v.begin() , v.end());
            map.erase(x);
         }
       }

       // for remaining arr1 elements
       for(auto x : map){
         int element = x.first;
         int count = x.second;

         vector<int>v(count , element);
         ans.insert(ans.end() , v.begin() , v.end());
       }
    return ans;
    }
};