class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<double> nums3;
        for(int i=0;i<nums1.size();i++){
            nums3.push_back(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++){
            nums3.push_back(nums2[i]);
        }

        sort(nums3.begin() , nums3.end());

        int size = nums3.size();
        if(size%2==1){
            return nums3[size/2];
        }
        else{
            int mid1 = nums3[size/2-1];
            int mid2 = nums3[size/2];
            double ans=(mid1+mid2)/2.0;
            return ans;
        }
    }
};