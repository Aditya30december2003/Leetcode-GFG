class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int maxHeight=0,leftMax=0,rightMax=0,index=0;
        int water=0;
        //maxHeight
        for(int i=0;i<n;i++){
            if(maxHeight<height[i]){
                maxHeight=height[i];
                index=i;
            }
        }

        //leftMax
        for(int i=0;i<index;i++){
           if(height[i]<leftMax){
               water+=leftMax-height[i];
           }
           else{
               leftMax=height[i];
           }
        }

        //rightMax
        for(int i=n-1;i>index;i--){
          if(rightMax>height[i]){
              water+=rightMax-height[i];
          }
          else{
              rightMax=height[i];
          }
        }
        return water;
    }
};