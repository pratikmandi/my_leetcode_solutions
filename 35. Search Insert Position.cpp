class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low=0, high=nums.size()-1;
        int mid = (low+high)/2;
        
            while(low<=high){
                if(nums[mid]==target){
                    return mid;
                }
                else if (target>nums[mid]){
                    low = mid+1;
                } else {
                    high = mid-1;
                }
                mid = (low+high)/2;
            }
        return low;
    }
};