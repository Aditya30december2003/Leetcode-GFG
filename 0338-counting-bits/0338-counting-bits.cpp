class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;
        //right shift mein complexity zyada hojaegi isliye list significant bit htane  k liye dusra method hai apne piche wale number se & operation krdo and count se bda do.
        for(int i=0;i<=n;i++){
            int count=0;
            int num=i;
            while(num!=0){
             count++;
             num = num & (num-1);
            }
            ans.push_back(count);
        }
        return ans;
    }
};