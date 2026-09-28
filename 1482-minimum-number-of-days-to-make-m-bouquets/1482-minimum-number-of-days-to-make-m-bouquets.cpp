class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        
        int left = *min_element(bloomDay.begin(), bloomDay.end());
        int right = *max_element(bloomDay.begin(), bloomDay.end());
        int ans=-1;

        if(1ll * m*k > bloomDay.size()){
            return -1;
        }

        while(left<=right){

            int mid = left + (right-left)/2;

            int res = check(bloomDay,mid,k);

            if(res >= m){
                ans = mid;
                right = mid-1;
            }
            else{
                left = mid+1;
            }
        }
        return ans;

    }

    int check(vector<int>& bloomDay,int mid,int k){
        
        int count = 0;
        int res = 0;

        for(int i =0;i<bloomDay.size();i++){
             if(bloomDay[i]<=mid){
                count++;

                if(count == k){
                    count = 0;
                    res++;
                }
             }
             else{
                count = 0;
             }
        }
        return res;
    }
};