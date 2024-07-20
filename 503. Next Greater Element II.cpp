class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        
    //Optimised(Using Monotonic Stack): Time: O(4n) Space: O(2n)
        int n=nums.size();
        stack<int> st;
        vector<int> nge(n,-1);
        
        for (int i = 2*n-1; i>= 0; i--) {
            while (!st.empty() && st.top() <= nums[i % n]) {
                st.pop();
            }
            if (i<n) {
                nge[i] = st.empty() ? -1 : st.top();
            }
            st.push(nums[i % n]);
        }
        return nge;
    }
};

//     //Brute-force: Time: O(n^2), Space: O(n)
//     vector<int> nextGreaterElements(vector<int>& nums) {
//         int n=nums.size();
//         vector<int> nge(n, -1);
        
//         for (int i = 0; i < n; i++) {
//             for (int j = i + 1; j < i + n; j++) {
//                 int ind = j % n;
//                 if (nums[ind] > nums[i]) {
//                     nge[i] = nums[ind];
//                     break;
//                 }
//             }
//         }
//         return nge;
//     }
// };