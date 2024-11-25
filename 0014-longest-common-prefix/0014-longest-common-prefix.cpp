class Solution {
public:
    string common(string s1 , string s2){
        int i=0 , j=0;
        string ans="";
        while(i<s1.size() && j<s2.size()){
            if(s1[i]!=s2[j]){
                break;
            }
            else{
             ans+=s1[i];
            }
            i++;
            j++;
        }
        return ans;
    }
    string longestCommonPrefix(vector<string>& strs) {
        string ans=strs[0];

        for(int i=1;i<strs.size();i++){
           ans=common(strs[i] , ans);
        }
        return ans;
    }
};