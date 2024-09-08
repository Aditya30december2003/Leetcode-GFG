class Solution {
public:
    bool check(vector<string>& strs , int col){
        for(int i=0;i<strs.size()-1;i++){
            if(strs[i][col] > strs[i+1][col])
            return 0;
        }
        return 1;
    }
    int minDeletionSize(vector<string>& strs) {
        int count=0;
        int numCol = strs[0].size();

        for(int col=0;col<numCol;col++){
            if(check(strs , col) ==0)
            count++;
        }
        return count;
    }
};