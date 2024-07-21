class Solution {
public:
    bool isAnagram(string s, string t) {
       if(s.length()!=t.length()){
        return false;
       }
       vector<int>char1(256 , 0);
       vector<int>char2(256,0);
       int n=s.length();
       int i=0;
       while(i<n){
        char1[s[i]]++;
        char2[t[i]]++;
        i++;
       }
       if(char1==char2){
        return true;
       }
       else{
        return false;
       }
    }
};