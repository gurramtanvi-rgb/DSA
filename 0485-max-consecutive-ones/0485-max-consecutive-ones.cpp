class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        int n= nums.size();
        int count=0;
        int ans=0;
        for(int i=0;i<n;i++){
           if(nums[i]==1){
            count = count+1;
           }
           if(nums[i]==0){
            if(count>ans){
                ans = count;
            }
            count=0;
           }
        }
        if(count>ans){
            ans = count;
        }
        return ans;
    }
};