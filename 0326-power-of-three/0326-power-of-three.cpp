class Solution {
public:
    bool isPowerOfThree(int n) {
        
        for(int i=0;i<INT_MAX;i++){
            if(n == long(pow(3,i))){
                return true;
            }
            if(pow(3,i) > n){
                break;
            }
        }
        return false;
    }
};