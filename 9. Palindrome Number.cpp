class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)
            return false;
        int dup=x;
        long sum =0;
        while(x!=0) {
            int lastdigit;
            lastdigit =x%10;
            sum=sum*10+lastdigit;
            x = x/10;
        }
        if(dup==sum)
            return true;
        else
            return false;
    }
};