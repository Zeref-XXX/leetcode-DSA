class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int end = nums.size() - 1;
        int start = 0;
        if (nums[end] < target)
            return end + 1;
        int ans = 0;
        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (nums[mid] >= target) {
                ans = mid;
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }

        return ans;
    }
};