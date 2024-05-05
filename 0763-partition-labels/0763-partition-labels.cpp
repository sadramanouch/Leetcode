class Solution {
public:
    vector<int> partitionLabels(string s) {
        int n = s.size();
        vector<int> result;
        unordered_map<char, int> lastOccurrence;
        for (int i = 0; i < n; i++) {
            lastOccurrence[s[i]] = i;
        }
        int start = 0;  // Start of the current partition
        int end = 0;    // End of the current partition
        for (int i = 0; i < n; i++) {
            // Update the end to the farthest last occurrence
            end = max(end, lastOccurrence[s[i]]);
            // If the current index reaches the end, create a partition
            if (i == end) {
                result.push_back(end - start + 1);  // Add partition size to the result
                start = i + 1;  // Move the start to the next index
            }
        }
        return result;
    }
};