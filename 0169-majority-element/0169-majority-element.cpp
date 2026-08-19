class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int n = nums.size();
        unordered_map<int,int> m;
        int ans;
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }
        
        int max = 0;

        for(pair<int,int> x:m){
           if(x.second > max){
              max = x.second;
              ans = x.first;
           }
        }

        return ans;
    }
};