class Solution {
public:
    bool isPalindrome(string s) {
    std::transform(s.begin(), s.end(), s.begin(), ::tolower);
    int low = 0;
    int high = s.size() - 1;

    while (low < high) {
    while (low < high && !isalnum(s[low])) {
      low++;
    }
    while (low < high && !isalnum(s[high])) { 
      high--;
    }

    if (low < high && s[low] != s[high]) {
      return false;
    }
    low++;
    high--;
  }
  return true;
}
};