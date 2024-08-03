class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans=INT_MIN;
        int minH=INT_MAX;
        int left=0 , right=height.size()-1;
        while(left<right){
            minH=min(height[left] , height[right]);
            int area = minH*(right-left);
            ans=max(ans , area);

            //if left is short move pointer left++ to check if there is a bigger left
            if(height[left]<height[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return ans;
    }
};