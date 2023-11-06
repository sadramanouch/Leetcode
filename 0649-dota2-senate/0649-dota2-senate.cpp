class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<int> rad;
        queue<int> dir;
        int n = senate.length();
        for (int i = 0; i < n; i++){
            if (senate[i] == 'R'){
                rad.push(i);
            }
            else {
                dir.push(i);
            }
        }
        while (!rad.empty() && !dir.empty()){
            if (rad.front() < dir.front()){
                rad.push(n++);
            }
            else {
                dir.push(n++);
            }
            rad.pop();
            dir.pop();
        }
        if (rad.empty()){
            return "Dire";
        }
        return "Radiant";
    }
};