class Solution {
public:
    string removeStars(string s) {
        
        int top = -1;

        vector<char> st;

        for(int i=0;i<s.size();i++){
        
        if(top!=-1){
            if(s[i]=='*'){
                top--;
                st.pop_back();
            }
            else{
                st.push_back(s[i]);
                top++;
            }
        }
        else{
            st.push_back(s[i]);
            top++;
        }
        }

        string r(st.begin(),st.end());
        return r;
    }
};