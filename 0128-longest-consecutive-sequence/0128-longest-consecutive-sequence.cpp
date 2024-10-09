class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>s;
        for(int&num:nums)
        s.insert(num);

        int maxLen=0;

        for(int x:s){
            //find starting
            if(s.find(x-1)==s.end()){
                int currNum=x;
                int len=1;
            

            while(s.find(currNum+1)!=s.end()){
                currNum++;
                len++;
            }
            maxLen=max(maxLen , len);
        }
    }
        return maxLen;

    }
};
