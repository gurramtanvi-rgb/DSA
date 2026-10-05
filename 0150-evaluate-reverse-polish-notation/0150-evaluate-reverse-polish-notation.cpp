class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        
        int top = -1;
        vector<int> st(tokens.size());

        for(int i=0;i<tokens.size();i++){

            if(tokens[i] != "+" && tokens[i] != "-" && tokens[i] != "*" && tokens[i] != "/")
            {
              top++;
              st[top] = stoi(tokens[i]);    
            }
            else if(tokens[i]=="+"){
                st[top-1] = st[top] + st[top-1];
                top--;
            }
            else if(tokens[i]=="-"){
                st[top-1] = st[top-1] - st[top];
                top--;
            }
            else if(tokens[i]=="*"){
                st[top-1] = st[top] * st[top-1];
                top--;
            }
            else if(tokens[i]=="/"){
                st[top-1] = st[top-1] / st[top];
                top--;
            }
        }
        return st[top];
    }
};