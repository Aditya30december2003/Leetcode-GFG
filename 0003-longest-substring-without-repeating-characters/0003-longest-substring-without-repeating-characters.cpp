class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()==0) return 0;

        int first=0 , second=0 , length=0;
        vector<bool>arr(256,0);
        while(second<s.size()){
            while(arr[s[second]]==1){
                arr[s[first]]=0;
                first++;
            }
            arr[s[second]]=1;
            length = max(length , second-first+1);
            second++;
        }
        return length;
    }
};