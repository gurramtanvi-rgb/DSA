class Solution {
public:
    int minSpeedOnTime(vector<int>& dist, double hour) {
        

        int left = 1;
        int right = 10000000;
        int ans = -1;

        while(left<=right){

            int mid = left + (right-left)/2;

            double k = check(dist,mid);

            if(k<=hour){
                ans = mid;
                right = mid-1;
            }
            else{
                left = mid+1;
            }
        }
        return ans;
    }

    double check(vector<int>& dist, int mid){
    double totalh = 0;

    for(int i=0;i<dist.size()-1;i++){
        totalh += ceil((double)dist[i]/mid);
    }

    totalh += (double)dist[dist.size()-1]/mid;

    return totalh;
    }
};