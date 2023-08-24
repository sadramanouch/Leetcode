class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> q;
        for (int i = 0; i<tokens.size(); i++){
            if (tokens[i] == "+"){
                int x = q.top();
                q.pop();
                int y = q.top();
                q.pop();
                q.push(x+y);
            }
            else if (tokens[i] == "/"){
                int x = q.top();
                q.pop();
                int y = q.top();
                q.pop();
                q.push(y/x);
            }
            else if (tokens[i] == "*"){
                int x = q.top();
                q.pop();
                int y = q.top();
                q.pop();
                q.push(x*y);
            }
            else if (tokens[i] == "-"){
                int x = q.top();
                q.pop();
                int y = q.top();
                q.pop();
                q.push(y-x);
            }
            else{
                q.push(stoi(tokens[i]));
            }
        }
        return q.top();
    }
};