class Solution {
public:
    int mySqrt(int x) {
        int ans = 1;
        if(x<1) return 0;
        for (int i = 2; i <= x / i; i++) {
             
            if (i * i <= x)
                ans = i;
        }
        return ans;
    }
};