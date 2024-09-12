class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_set<char>set;
        for(char &ch:allowed){
            set.insert(ch);
        }
        int count=0;
        for(string &word:words){
            bool check=true;
            for(char &ch:word){
                if(set.find(ch) == set.end()){
                    check=false;
                }
            }
            if(check)
            count++;
        }
        return count;
    }
};