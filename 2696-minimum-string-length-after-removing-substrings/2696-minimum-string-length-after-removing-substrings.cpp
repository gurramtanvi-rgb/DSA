class Solution {
public:
    int minLength(string s) {
        
        int top = -1;
        vector<char> st;

    for(int i =0;i<s.size();i++){
        if(top!=-1){
            if((s[i]=='B' && st[top]=='A') || (s[i]=='D' && st[top]=='C')){
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
        string t(st.begin(),st.end());
        return t.size();
    }
};