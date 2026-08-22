class Solution {
public:
    int trailingZeroes(int n) {
        
        int x=5;
        int count =0;
        for(int i=1;i<INT_MAX;i++){
            
            if(pow(5,i)>n){
                break;
            }
            count = count + n/(pow(5,i));
        }
        return count;
    }
};