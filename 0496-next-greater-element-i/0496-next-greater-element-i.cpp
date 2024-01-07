#include <vector>
#include <unordered_map>
#include <stack>

using namespace std;

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> nextGreater;
        stack<int> s;

        for (int num : nums2) {
            while (!s.empty() && num > s.top()) {
                nextGreater[s.top()] = num;
                s.pop();
            }
            s.push(num);
        }

        vector<int> result(nums1.size(), -1);

        for (int i = 0; i < nums1.size(); ++i) {
            auto it = nextGreater.find(nums1[i]);
            if (it != nextGreater.end()) {
                result[i] = it->second;
            }
        }

        return result;
    }
};
