class Solution {
public:
    void Concatenate(vector<string>&word , string&str){
        for(int i=0;i<word.size();i++){
            str+=word[i];
        }
    }
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string str1="";
        string str2="";
        Concatenate(word1 , str1);
        Concatenate(word2 , str2);

        return str1 == str2;
    }
};