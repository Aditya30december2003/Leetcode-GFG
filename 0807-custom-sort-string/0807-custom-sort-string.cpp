class Solution {
public:
    string customSortString(string order, string s) {
        string ans="";
        map<char , int>map;

        for(auto x : s){
           map[x]++;
        }

        for(auto x : order){
            if(map.find(x) != map.end()){
                auto temp = map.find(x);
                int count = temp->second;
                ans.append(count , x);
                map.erase(x);
            }
        }
         // Append the remaining characters that are not in 'order'
         for(auto x : map){
            int count = x.second;
            ans.append(count , x.first);
         }

         return ans;
    }
};