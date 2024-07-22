class Solution {
public:
    int lengthOfLongestSubstring(string s) {
      if(s.length()==0) return 0;
      vector<bool> arr(256 , 0);
      int first =0 , second=0 , length=0;
      while(second<s.length()){
        while(arr[s[second]]==1){
            arr[s[first]]=0; // character is no longer in the current window
            first++;
        }
        arr[s[second]]=1; // add current character to the window
        length=max(length , second-first+1);
        second++;
      }
      return length;
    }
};