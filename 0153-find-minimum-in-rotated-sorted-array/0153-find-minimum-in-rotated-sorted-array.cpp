class Solution {
public:
    int findMin(vector<int>& nums) {
        int ans = -1;
        int start = 0;
        int end = nums.size() - 1;
        if (nums[0] > nums[end]) {
            while (start <= end) {
                int mid = start + (end - start) / 2;
                cout << mid << " ";
                if (nums[mid] >= nums[0]) {
                    start = mid + 1;
                } else {
                    end = mid - 1;
                    ans = nums[mid];
                }
            }
            return ans;
        }
        return nums[0];
    }
};