class Solution {
public:
    int maxProduct(vector<int>& nums) {

        int n = nums.size();

        int current_max = nums[0];
        int current_min = nums[0];
        int max_product = nums[0];

        for(int i = 1; i < n; i++) {

            int num = nums[i];

            int temp_max = max(num, max(current_max * num, current_min * num));
            int temp_min = min(num, min(current_max * num, current_min * num));

            current_max = temp_max;
            current_min = temp_min;

            max_product = max(max_product, current_max);
        }

        return max_product;
    }
};