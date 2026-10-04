class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        
        int top = -1;
        vector<int> arr;
        vector<int> ans(prices.size());

        for(int i = prices.size()-1 ; i>=0 ; i--){

            while(top!=-1 && arr[top] > prices[i]){
                top--;
                arr.pop_back();
            }
            if(top!=-1){
            int dif = prices[i] - arr[top];
            ans[i] = dif;
            }
            else{
                ans[i] = prices[i];
            }
            top++;
            arr.push_back(prices[i]);
        }
        return ans;     
    }
};