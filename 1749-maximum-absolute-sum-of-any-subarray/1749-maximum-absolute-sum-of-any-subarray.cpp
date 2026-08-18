class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int n = nums.size();
        int current_max=0;
        int current_min=0;
        int max_sum=0;
        int min_sum=0;

        for(int i=0;i<n;i++){

            current_max = current_max + nums[i];
            max_sum = max(max_sum , current_max);

            if(current_max<0){
                current_max =0;
            }

        }

         for(int i=0;i<n;i++){

            current_min = current_min + nums[i];
            min_sum = min(min_sum , current_min);

            if(current_min>0){
                current_min =0;
            }
        }

        int ans = max(abs(min_sum),abs(max_sum));
        return ans;
    }
};