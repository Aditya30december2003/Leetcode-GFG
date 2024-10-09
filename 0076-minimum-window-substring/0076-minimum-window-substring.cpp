class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char , int>umap; // char of t-->freq
        int total=t.size();
        int start=0 , end=0 , index=-1 , ans=INT_MAX;
        for(char&ch:t)
        umap[ch]++;

        while(end<s.size()){
            umap[s[end]]--;
            if(umap[s[end]]>=0)
            total--;

            //make  window size is small
            while(total==0 && start<=end){
                if(ans> end-start+1){
                  ans=end-start+1;
                  index=start;
                }
            
                umap[s[start]]++;
                if(umap[s[start]]>0)
                total++;

                start++;

            }
            end++;
        }
      if(index==-1)
      return "";

      return s.substr(index , ans);
      
    }
};