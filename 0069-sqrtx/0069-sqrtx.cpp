class Solution {
public:
    int mySqrt(int x) {
        int start = 1, end = x;
        int ans = 1;
        while (start <= end) {
            int mid =start+(end-start)/ 2;
            cout<<mid<<" ";
            if(mid<=x/mid){
                ans=mid;
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }   
        return x == 0 ? 0 : ans;
    }
};