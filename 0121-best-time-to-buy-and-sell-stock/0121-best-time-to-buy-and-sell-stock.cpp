class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxP=0;
        int minNum=INT_MAX;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<minNum)
            minNum=prices[i];

            else
            maxP=max(maxP , prices[i]-minNum);
        }
        return maxP;
    }
};