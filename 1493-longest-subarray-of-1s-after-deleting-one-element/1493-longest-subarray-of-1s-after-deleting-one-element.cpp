class Solution {
public:
    int longestSubarray(vector<int>& nums) {

       int n = nums.size();
       int left = 0;
       int right = 0;
       int k =1;
       int count =0;
       int ans;
       int res =0;
       while(right<n){

         if(nums[right]==0){
            count++;
         }
            while(count>1){
             if(nums[left]==0){
                count--;
             }  
             left++;
            }

            ans = right - left;
            if(ans>res){
                res = ans;
            }

            right++;
         }
       return res;

    }
};