class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int n= nums.size();
        int j=0;
        int i=0;
        int k=n-1;
        int temp;
        while(j<=k){

            if(nums[j]==0){
                temp=nums[j];
                nums[j]=nums[i];
                nums[i]=temp;

                i++;
                j++;
            }
            else if(nums[j]==1){
                j++;
            }
            else{
                temp=nums[j];
                nums[j]=nums[k];
                nums[k]=temp;

                k--;

            }
        }
        
    }
};