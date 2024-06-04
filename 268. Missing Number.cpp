class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        
        //METHOD 1:
            // int i;
            // sort(nums.begin(),nums.end());
            // for(i=0; i<n; i++){
            //     if(nums[i]!=i){
            //         return i;
            //     }
            // }
            // return i;
        
        //Method 2: USING GAUSSIAN FORMULA:
            int sum=0;
            for(auto i: nums){
                sum +=i;
            }
            return ((n*(n+1))/2)-sum;
    }
};