class Solution {
public:
    string simplifyPath(string path) {
        vector<string> stack;
        stringstream ss(path);
        string current;

        while (getline(ss, current, '/')) {
            if (current == "" || current == ".") {
                continue;
            }
            if (current == "..") {
                if (!stack.empty()) {
                    stack.pop_back();
                }
            } 
            else {
                stack.push_back(current);
            }
        }
        string result;
        for (const string& dir : stack) {
            result += "/" + dir;
        }

        if (result.empty()){
            return "/";
        }
        return result;
    }
};