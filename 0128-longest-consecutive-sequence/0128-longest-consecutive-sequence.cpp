class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        unordered_set<int> s;
        int count=1;
        int ans=0;
        int n = nums.size();
        for(int x : nums){
           s.insert(x);
        }

        for(int x : s){
           if(s.count(x -1)==0){
           
           int current = x;
           int count =1;

           while(s.count(current+1)){
            current++;
            count++;
           }

           ans = max(ans,count);
        } 
    }
     return ans;
    }
};