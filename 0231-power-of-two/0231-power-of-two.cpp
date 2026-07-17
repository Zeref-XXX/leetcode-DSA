class Solution {
public:
    bool isPowerOfTwo(int n) {
        int ans=1;

        while(ans<n && ans<INT_MAX/2){
            ans=ans*2;
        }
        
        return ans==n;
       
    }
};