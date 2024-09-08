class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<char>ch(26 , 0);

        for(int i=0;i<sentence.size();i++){
            ch[sentence[i]-'a']++;
        }

        for(int i=0;i<ch.size();i++){
            if(ch[i]==0)
            return false;
        }

        return true;
    }
};