class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        std::vector<std::string> res;
        int targetIndex = 0;  // To track the current target position

        // Iterate from 1 to n
        for (int i = 1; i <= n; i++) {
            if (targetIndex >= target.size()) {
                break;  // If target is already built, exit early
            }

            if (target[targetIndex] == i) {
                // If `i` is part of the target sequence, push it
                res.push_back("Push");
                targetIndex++;  // Move to the next target index
            } else {
                // If `i` is not in target, push and then pop
                res.push_back("Push");
                res.push_back("Pop");
            }
        }

        return res;
    }
};