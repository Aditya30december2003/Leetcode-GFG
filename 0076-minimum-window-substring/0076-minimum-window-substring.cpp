class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char , int>umap;
        for(char&ch:t){
            umap[ch]++;
        }
        int total=t.size();
        int start=0 , end=0 , ans=INT_MAX; // min lenght if substr
        int index=-1; //starting index of sub stirng
        while(end<s.size()){
            umap[s[end]]--;
            if(umap[s[end]]>=0)
            total--;

            // can we decerease the size of widow
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
        string str="";
        
    return s.substr(index ,ans);
    }
};