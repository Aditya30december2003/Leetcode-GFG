class Solution {
public:
    bool check(vector<string>& strs , int col){
        for(int i=0;i<strs.size()-1;i++){
            if(strs[i][col] > strs[i+1][col])
            return false;
        }
        return true;
    }
    int minDeletionSize(vector<string>& strs) {
        int numCol=strs[0].size();
        int count=0;

        for(int col=0;col<numCol;col++){
            if(!check(strs , col))
            count++;
        }

        return count;
    }
};