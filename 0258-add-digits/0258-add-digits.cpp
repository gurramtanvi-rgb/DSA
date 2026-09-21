class Solution {
public:

    int ans(int k){
        int rem;
        int sum = 0;
        int n =k;
        while(n!=0){
            rem = n%10;
            sum = sum + rem;
            n = n/10;
        }
        return sum;
    }

    int addDigits(int num) { 
       int r;
       int t = num;

       while(t>=10){
        t = ans(t);
       }
       return t;
    }
};