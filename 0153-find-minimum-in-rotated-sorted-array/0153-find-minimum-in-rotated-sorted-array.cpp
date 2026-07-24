class Solution {
public:
    int findMin(vector<int>& nums) {
        int start = 0;
        int end = nums.size() - 1;
        int ans=0;
        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (nums[0] <= nums[mid]) {
                start = mid + 1;
            } else {
                ans = mid;
                end = mid - 1;
            }
        }
        return nums[ans];
    }
};