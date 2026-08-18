class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        
        int n = nums.size();
        int sum = 0;
        int min_sum = nums[0];
        int max_sum = nums[0];

        int min_current = 0;
        int max_current = 0;

        for(int i = 0; i < n; i++){
            max_current = max_current + nums[i];

            max_sum = max(max_sum, max_current);

            if(max_current < 0){
                max_current = 0;
            }
        }

        for(int i = 0; i < n; i++){
            min_current = min_current + nums[i];

            min_sum = min(min_sum, min_current);

            if(min_current > 0){
                min_current = 0;
            }
        }

        if(max_sum < 0){
            return max_sum;
        }

        sum = accumulate(nums.begin(), nums.end(), 0);

        int c_sum = sum - min_sum;

        int ans = max(c_sum, max_sum);

        return ans;
    }
};