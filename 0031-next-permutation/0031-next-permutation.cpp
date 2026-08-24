class Solution {
public:
    void nextPermutation(vector<int>& nums) {
       
       int n=nums.size();
       int temp=0;
       int r=0;
       int count=0;
       for(int i=n-1;i>0;i--){
         if(nums[i-1]<nums[i]){
            r = i-1;
            count = 1;
            break;
            }
            }
            if(count == 0){
                reverse(nums.begin(),nums.end());
                return;
            }

            for(int j=n-1;j>r;j--){
                if(nums[j]>nums[r]){
                    swap(nums[j],nums[r]);
                    break;
                }
            }

        reverse(nums.begin() + r + 1 , nums.end());
       
        
    }
};