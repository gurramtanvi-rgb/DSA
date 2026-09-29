class Solution {
public:
    int maxDistance(vector<int>& position, int m) {
        
        sort(position.begin(),position.end());

        int n = position.size();
        int left = 1;
        int right = position[n-1]-position[0];
        int ans;

        while(left<=right){

            int mid = left + (right-left)/2;

            if(check(position,mid,m)){
                ans = mid;
                left = mid+1;
            }
            else{
                right = mid-1;
            }
        }
        return ans;
    }

    bool check(vector<int>& position, int mid,int m){

        int count = 1;
        int last = position[0];

        for(int i =0;i<position.size();i++){
            if(position[i]-last >= mid){
                count++;
                last = position[i];
            }
            if(count==m){
                return true;
            }
        }
        return false;
    }
};