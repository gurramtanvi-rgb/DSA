class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int temp;
        int i=0;

       for(int j=0;j<n;j++){
           if(nums[j]!=0){
            temp=nums[i];
            nums[i]=nums[j];
            nums[j]=temp;

            i++;
           }
       }
          
    }
};