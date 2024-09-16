class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int>s;
        for(int&x:nums){
          if(s.find(x)!=s.end())
          return x;
          else
          s.insert(x);
        }
        return -1;
    }
};