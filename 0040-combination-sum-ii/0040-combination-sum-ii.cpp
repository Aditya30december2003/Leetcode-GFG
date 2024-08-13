class Solution {
public:
void findCombinations(int index, int target, vector<int>& candidates, vector<int>& current, vector<vector<int>>& ans) {
        if (target == 0) {
            ans.push_back(current);
            return;
        }

        for (int i = index; i < candidates.size(); i++) {
            
            if (i > index && candidates[i] == candidates[i - 1]) continue;

            
            if (candidates[i] > target) break;

            current.push_back(candidates[i]);
            findCombinations(i + 1, target - candidates[i], candidates, current, ans);
            current.pop_back(); // Backtrack
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> current;
        sort(candidates.begin(), candidates.end()); 
        findCombinations(0, target, candidates, current, ans);
        return ans;
    }
};
