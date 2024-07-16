class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxp=INT_MIN;
        int minp=prices[0];
        for(int i=0;i<prices.size();i++){
            maxp=max(maxp , prices[i]-minp);
            minp=min(minp , prices[i]);
        }
        return maxp;
    }
};