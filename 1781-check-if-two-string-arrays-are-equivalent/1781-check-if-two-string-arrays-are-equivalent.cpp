class Solution {
public:
    void Conc(vector<string>& word , string&s){
     for(int i=0;i<word.size();i++){
        s+=word[i];
     }
    }
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s1="" , s2="";
        Conc(word1 , s1);
        Conc(word2 , s2);

        return s1==s2;
    }
};