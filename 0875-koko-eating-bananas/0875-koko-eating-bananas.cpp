class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        
        int left = 1;
        int right = *max_element(piles.begin(), piles.end());
        int ans;

        while(left<=right){

            int mid = left + (right-left)/2;

            long long totalh = count(piles,mid);
            
            if(totalh<=h){
                ans = mid;
                right = mid-1;
            }
            else{
                left = mid+1;
            }
        }
        return ans;
    }

    long long count(vector<int>& piles, int j){
        
        long long totalh=0;

        for(int i = 0;i<piles.size();i++){

        totalh += ceil((double)piles[i] / j);

        }

        return totalh;
    }
};