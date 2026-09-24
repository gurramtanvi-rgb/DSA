class Solution {
public:
    int mySqrt(int x) {
        if(x == 0) {
            return 0;
        }

        int left = 1;
        int right = x;

        while(left <= right) {
            int mid = left + (right - left) / 2;

            if(1LL * mid * mid == x ||
               (1LL * mid * mid < x &&
                x < 1LL * (mid + 1) * (mid + 1))) {
                return mid;
            }
            else if(1LL * mid * mid > x) {
                right = mid - 1;
            }
            else {
                left = mid + 1;
            }
        }

        return right;
    }
};