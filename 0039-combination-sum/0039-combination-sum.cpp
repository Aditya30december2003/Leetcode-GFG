class Solution {
private:
void Recursion(vector<vector<int>>&ans, vector<int>&temp , vector<int>arr , int target , int index){
    if(target==0){
        ans.push_back(temp);  //target sum mil chuka hai
        return;
    }
    if (index == arr.size() || target < 0) {
            return;
    }
    //if to include same index again
     temp.push_back(arr[index]);
     Recursion(ans , temp , arr , target-arr[index] , index);
    //if not to be include same index again
    temp.pop_back();
    Recursion(ans , temp , arr , target , index+1);
}
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>temp;
        Recursion(ans , temp , candidates , target , 0);
        return ans;
    }
};