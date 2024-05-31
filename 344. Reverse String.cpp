
class Solution {
 public:
  void reverseString(vector<char>& s) {

    //Method 1:
//     int l = 0;
//     int r = s.size()-1;

//     while (l<r)
//       swap(s[l++], s[r--]);

    //Method 2: Using Stack:
      
      stack <char> st;
      int n = s.size();
      for (int i=0; i<n; i++) {
            st.push(s[i]);
      }
      int j=0;
      while (!st.empty()) {
          char elem=st.top();
          st.pop();
          s[j] = elem;
          j++;
      }
    }
};