class Solution {
public:
    char repeatedCharacter(string s) {
       set<int>visited;

       for(int i=0;i<s.size();i++){
        if(visited.find(s[i]) != visited.end())
        return s[i];

        else
        visited.insert(s[i]);
       }

       return 0;
    }
};