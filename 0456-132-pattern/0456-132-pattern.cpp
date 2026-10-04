class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        
        int top = -1;
        vector<int> arr;
        int mid=INT_MIN;

        for(int i = nums.size()-1; i>=0; i--){
            
                if(nums[i]<mid){
                      return true;
                }

                while(top!=-1 && arr[top] < nums[i]){
                    mid = max(mid,arr[top]);
                    top--;
                    arr.pop_back();
                }

                top++;
                arr.push_back(nums[i]);            
        }
        return false;
    }
};