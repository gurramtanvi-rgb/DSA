class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        int n = nums.size();
        int left = 0;
        int right = 0;
        int sum =0;
        int ans = INT_MAX;
        int res;

        while(right<n){
            sum = sum + nums[right];
            while(sum>=target){
                res = (right - left + 1);
                if(res < ans){
                    ans = res;
                }
                sum = sum - nums[left];
                left++;
            }
            
            right++;
            
        }
        if (ans == INT_MAX) {
    return 0;
}
return ans;
    }
};