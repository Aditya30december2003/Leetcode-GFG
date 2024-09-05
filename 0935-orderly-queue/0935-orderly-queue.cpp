class Solution {
public:
    string orderlyQueue(string s, int k) {
        // if k==1 to cant swap so cant be sorted but k>1 will alwats be sorted
        if(k>1){
            sort(s.begin() , s.end());
            return s;
        }

        string result = s;
        int n=s.length();
        for(int i=1;i<=n;i++){
            string temp= s.substr(i) + s.substr(0 , i);
            result = min(temp , result);
        }
        return result;
    }
};