class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        
        int top = -1;

        vector<int> res;

    
    for(int i=0;i<asteroids.size();i++){
        
        bool alive = true;
        while(top!=-1 && res[top] > 0 && asteroids[i]<0){

            if(abs(res[top]) < abs(asteroids[i])){
                top--;
                res.pop_back();
            }
            else if(abs(res[top]) == abs(asteroids[i])){
               top--;
               res.pop_back();
               alive = false;
               break; 
               
            }
            else{
                alive = false;
                break;
            }
            }
            if(alive){
            top++;
            res.push_back(asteroids[i]);
            }
        }
        return res;
    }
};