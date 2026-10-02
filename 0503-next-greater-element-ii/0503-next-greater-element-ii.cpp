class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        
        int top = -1;
        
        int n = nums.size();
        int m = (2*n) -1;
        vector<int> ans;
        vector<int> res(n,-1);

        for(int i = m;i>=0;i--){

            while(top!=-1 && ans[top] <= nums[i%n]){
                top--;
                ans.pop_back();
               }

               if(i<n){
                if(ans.empty()){
                    res[i] = -1;
                }
                else{
                    res[i] = ans[top];
                }
               }
               top++;
               ans.push_back(nums[i%n]);

        }
        return res;
    }
};