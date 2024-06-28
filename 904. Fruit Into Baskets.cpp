class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int left=0,right=0,maxLength=0, n=fruits.size();
        unordered_map<int,int> mpp;

        while (right<n) {
            mpp[fruits[right]]++;

            if (mpp.size()>2) {
                mpp[fruits[left]]--;
                if (mpp[fruits[left]]==0) {
                    mpp.erase(fruits[left]);
                }
                left++;
            }
            maxLength=max(maxLength, right-left+1);
            right++;
        }
        return maxLength;
    }
};