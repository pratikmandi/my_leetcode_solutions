class Solution {
    public:
    int mySqrt(int x) {
        if (x == 0 || x == 1)
            return x;

        long long start,end=x,mid=-1;
        while (start<=end) {
            mid=(start+end)/2;
            if (mid*mid>x)
                end=mid-1;
            else if (mid*mid==x)
                return mid;
            else
                start=mid+1;
        }
        return end;
    }
};