class Solution {
public:
    int maximumCount(vector<int>& nums) {

        int n = nums.size();

        int left = 0;
        int right = n - 1;
        int neg = n;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (nums[mid] >= 0) {
                neg = mid;
                right = mid - 1;
            }
            else {
                left = mid + 1;
            }
        }

        left = 0;
        right = n - 1;
        int pos = n;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (nums[mid] > 0) {
                pos = mid;
                right = mid - 1;
            }
            else {
                left = mid + 1;
            }
        }

        pos = n - pos;

        return max(pos, neg);
    }
};