class Solution {
public:
    int maximumCandies(vector<int>& candies, long long k) {
        
        int left = 1;
        int right = *max_element(candies.begin(),candies.end());
        int ans =0;

        while(left<=right){

            int mid = left + (right-left)/2;

            if(check(candies,mid,k)){
                ans = mid;
                left = mid+1;
            }
            else{
                right = mid-1;
            }
        }
        return ans;
    }

    bool check(vector<int>& candies,int mid, long long k){

        long long count = 0;

        for(int i=0;i<candies.size();i++){
            
            int diff = candies[i]/mid;
            if(diff >= 1){
                count +=diff;
            }

            if(count >= k){
                return true;
            }
        }
        return false;
    }
};