#include <iostream>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        int sum=0,lastdigit;
        while(x!=0){
            int lastdigit= x%10;
            if((sum>INT_MAX/10)|| (sum < INT_MIN/10)) {
                return 0;
            }
            sum=sum*10+lastdigit;
            x=x/10;
        }
        return sum;
    }
};