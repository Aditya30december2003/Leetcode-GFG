class Solution {
public:
    string Solve(string s1 , string s2){
        string ans="";
        int i=0;
        while(i<s1.size() && i<s2.size()){
            if(s1[i]==s2[i])
            ans+=s1[i];
            else
            break;

            i++;
        }
        return ans;
    }
    string longestCommonPrefix(vector<string>& strs) {
        
        string str = strs[0];
        for(int i=1;i<strs.size();i++){
            str = Solve(str , strs[i]);
        }

        return str;
    }
};