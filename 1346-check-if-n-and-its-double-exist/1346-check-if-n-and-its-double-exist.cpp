class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_set<int> s;

        for(int x:arr){
            if(s.count(x*2)){
                return true;
            }
            if(x%2==0 && s.count(x/2)){
                return true;
            }
            s.insert(x);
        }
        return false;
    }
};