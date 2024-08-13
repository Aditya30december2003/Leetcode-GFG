class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> map;

        for(int i=0;i<nums.size();i++){
            map[nums[i]]++;
        }

        vector<int>arr;
        int t = nums.size()/3;
        
        for(auto countPair : map){
            int element = countPair.first;
            int count = countPair.second;

            if(count>t){
                arr.push_back(element);
            }
        }
        return arr;
    }
};