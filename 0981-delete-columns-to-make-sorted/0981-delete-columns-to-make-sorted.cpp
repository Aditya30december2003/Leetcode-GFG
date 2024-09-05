class Solution {
public:
    bool isSorted(vector<string>& s , int col){
        for(int i=0;i<s.size()-1;i++)
        {
            if(s[i][col] > s[i+1][col])
            return false;
        }
        return true;
    }
    int minDeletionSize(vector<string>& strs) {
        int count=0;
        int numCol=strs[0].size();

        for(int col=0;col<numCol;col++){
            if(isSorted(strs , col) == 0)
            count++;
        }
        return count;
    }
};