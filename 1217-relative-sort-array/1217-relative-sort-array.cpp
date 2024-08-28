class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
      vector<int>ans;

      map<int , int>map;

      for(auto x : arr1){
        map[x]++;
      }

      for(auto x : arr2){
       if(map.find(x) != map.end()){
        auto temp = map.find(x);
       // Here, temp is likely an iterator or pointer to an element in a container like a map. The -> operator is used to access the second member
        int count = temp->second; // 5 -> 2
        vector<int>v(count , x); //5 ,5
        ans.insert(ans.end() , v.begin() , v.end());
        map.erase(x);
       }
      }
      //for remaining
      for(auto x : map){
        //In contrast, if you had an iterator or an object directly (not a pointer), you would use the dot (.)
        int element = x.first;
        int count = x.second;
        vector<int>v(count , element);
        ans.insert(ans.end() , v.begin() , v.end());
      }
      return ans;
    }
};