class Solution {
public:
    bool detectCapitalUse(string word) {
        int countCap=0;

        for(char &ch:word){
            if(isupper(ch))
            countCap++;
        }

        if(countCap==0)
        return true;

        if(countCap==word.size())
        return true;

        if(countCap==1 && isupper(word[0]))
        return true;

        return false;
    }
};