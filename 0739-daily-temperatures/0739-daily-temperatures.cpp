class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        
        int n = temperatures.size();
        int top = -1;

        vector<int> ans;
        vector<int> res(n,0);

        for(int i= n-1;i>=0;i--){

            while(top!=-1&& temperatures[ans[top]]<=temperatures[i]){
                top--;
                ans.pop_back();
            }

            if(top!=-1){
                res[i] = ans[top]-i;
            }
            top++;
            ans.push_back(i);

        }
         return res;
    }
};