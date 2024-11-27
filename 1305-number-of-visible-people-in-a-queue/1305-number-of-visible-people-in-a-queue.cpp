class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& heights) {
        int n=heights.size();
        stack<int>stk;
        stk.push(heights[n-1]);
        vector<int>ans;
        ans.push_back(0);

        for(int i=n-2;i>=0;i--){
            int count=0;
            while(!stk.empty() && stk.top()<=heights[i]){
                stk.pop();
                count++;
            }
            if(!stk.empty()) count++;
            stk.push(heights[i]);
            ans.push_back(count);
        }
        reverse(ans.begin() , ans.end());
        return ans;
    }
};