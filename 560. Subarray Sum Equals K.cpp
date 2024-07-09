class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
       int n = nums.size();
       unordered_map < int, int > hash;
       int count = 0, sum = 0;
        
       for (int i = 0; i < n; i++) {
         sum += nums[i];
       if (sum == k) {
         count++;
       }
       if (hash.find(sum - k) != hash.end()) {
         count += hash[sum - k];
       }
       hash[sum]++;
     }
     return count;
    }
};