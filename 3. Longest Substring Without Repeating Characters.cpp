class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    //Method 1:
        vector<int> hashMap(256,-1);
        int l=0,r=0,maxlength=0;
        int n=s.length();

        while(r<n){
            if(hashMap[s[r]!= -1]){
                if(hashMap[s[r]]>=l){
                    l=hashMap[s[r]]+1;
                }
            }
            int len=r-l+1;
            maxlength=max(len,maxlength);
            hashMap[s[r]]=r;
            r++;
        }
        return maxlength;
    }
    
    //Method 2:
//         if(s.length() == 0)
//             return 0;

//         unordered_map<char,int> mp;
//         int i = 0, j = 0;
//         int n = s.length();
//         int mx = INT_MIN;

//         while(j<n){
//             mp[s[j]]++;

//             if(mp.size()==j-i+1){ // All characters are unique
//                 mx=max(mx,j-i+1);
//                 j++;
//             }
//             else if(mp.size()<j-i+1){ // There are duplicate characters
//                 while(mp.size()<j-i+1){ // Remove characters from the left
//                     mp[s[i]]--;
//                     if(mp[s[i]] == 0){ // Remove character completely if count is 0
//                         mp.erase(s[i]);
//                     }
//                     i++;
//                 }
//                 j++;
//             }
//         }
//         return mx;
//     }
};