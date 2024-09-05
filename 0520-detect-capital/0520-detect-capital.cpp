class Solution {
public:
    bool detectCapitalUse(string word) {
        int countCap =0;

        for(char &ch:word){
            if(isupper(ch)){  //ch>='A' && ch<='Z'
                countCap++;
            }
        }

        //if all are small letters
        if(countCap==0)
        return true;

        //if all are capital
        if(countCap == word.size())
        return true;

        //if first letter is cap
        if(countCap==1 && isupper(word[0]))
        return true;


        return false;
    }
};