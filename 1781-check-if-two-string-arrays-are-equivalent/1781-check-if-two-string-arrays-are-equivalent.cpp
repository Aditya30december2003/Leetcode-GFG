class Solution {
public:
    void Con(vector<string>&word , string&result){
        for(int i=0;i<word.size();i++){
            result+=word[i];
        }
    }
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string result1="";
        string result2="";

        Con(word1 , result1);
        Con(word2 , result2);

        return result1 == result2;
    }
};