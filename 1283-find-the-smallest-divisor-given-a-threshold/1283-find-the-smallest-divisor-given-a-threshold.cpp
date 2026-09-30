class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        
        int left = 1;
        int right = *max_element(nums.begin(),nums.end());
        int ans=-1;

        while(left<=right){
            
            int mid = left + (right-left)/2;

            if(check(nums,threshold,mid)){
                ans = mid;
                right = mid-1;
            }
            else{
                left = mid+1;
            }
        }
        return ans;
    }

    bool check(vector<int>& nums, int threshold,int mid){
        int sum = 0;

        for(int i=0;i<nums.size();i++){

            sum = sum + ceil((double)nums[i]/mid);
        }
        if(sum<=threshold){
            return true;
        }
    return false;
    }
};