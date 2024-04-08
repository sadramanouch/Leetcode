#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    vector<int> executeInstructions(int n, vector<int>& startPos, string s) {
        vector<int> answer(s.size(), 0);
        
        for (int i = 0; i < s.size(); ++i) {
            int x = startPos[0];
            int y = startPos[1];
            int cnt = 0;
            
            for (int j = i; j < s.size(); ++j) {
                if (s[j] == 'R' && y < n - 1) {
                    ++y;
                    ++cnt;
                } else if (s[j] == 'L' && y > 0) {
                    --y;
                    ++cnt;
                } else if (s[j] == 'U' && x > 0) {
                    --x;
                    ++cnt;
                } else if (s[j] == 'D' && x < n - 1) {
                    ++x;
                    ++cnt;
                } else {
                    break;
                }
            }
            
            answer[i] = cnt;
        }
        
        return answer;
    }
};
