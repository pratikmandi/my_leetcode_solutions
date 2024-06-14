class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int,int> mpp;
        vector<int> v;
        for(auto i: nums){
            mpp[i]++;
        }
        for(auto& x: mpp){
            if(x.second==1)
                v.push_back(x.first);
        }
        return vector<int>(v.begin(), v.end());
    }
};