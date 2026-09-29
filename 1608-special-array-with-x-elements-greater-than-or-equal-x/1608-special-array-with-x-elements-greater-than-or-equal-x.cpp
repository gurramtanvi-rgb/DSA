class Solution {
public:
    int specialArray(vector<int>& nums) {

        int ans = -1;
        int left = 1;
        int right = nums.size();

        while (left <= right) {

            int mid = left + (right - left) / 2;

            int count = 0;
            for (int i = 0; i < nums.size(); i++) {
                if (nums[i] >= mid) {
                    count++;
                }
            }

            if (count == mid) {
                return mid;
            }
            else if (count > mid) {
                left = mid + 1;
            }
            else {
                right = mid - 1;
            }
        }

        return ans;
    }
};