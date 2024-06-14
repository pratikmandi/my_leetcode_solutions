class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        //Method 1: Time Complexity O(n) & Space Complexity O(1)
        int slow = nums[nums[0]];
        int fast = nums[nums[nums[0]]];

        while (slow != fast) {
          slow = nums[slow];
          fast = nums[nums[fast]];
        }

        slow = nums[0];

        while (slow != fast) {
          slow = nums[slow];
          fast = nums[fast];
        }

        return slow;
        
        //Method 2: Time and Space Complexity: O(n)
        // unordered_map<int,int> mpp;
        // vector<int> v;
        // for(auto i: nums){
        //     mpp[i]++;
        // }
        // for (auto& x : mpp) {
        //     if (x.second>1) {
        //         v.push_back(x.first);
        //     }
        // }
        // for(auto &i:v){
        //     return i;
        // }
        // return 0;
    }
};