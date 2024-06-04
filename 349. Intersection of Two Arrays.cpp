class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        //Method 1:
            unordered_map<int, bool> mpp;
            for (auto n:nums1) {
                mpp[n]=true;
            }
            vector<int> result;
            for (auto n : nums2){
                if (mpp.find(n)!=mpp.end() && mpp[n]){
                    result.push_back(n);
                    mpp[n]=false;
                }                    
            }
            return result;
        
        //Method 2:
//             unordered_set<int> set1(nums1.begin(),nums1.end());
//             unordered_set<int> result;
//             for(int i=0; i<nums2.size();i++)
//                 if(set1.find(nums2[i]) !=set1.end())
//                     result.insert(nums2[i]);

//             return vector<int>(result.begin(), result.end());
    }
};