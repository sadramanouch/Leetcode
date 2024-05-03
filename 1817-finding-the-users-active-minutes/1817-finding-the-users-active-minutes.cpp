class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        unordered_map<int, unordered_set<int>> userMinutes;
        for (const auto& log : logs) {
            int userId = log[0];
            int minute = log[1];
            userMinutes[userId].insert(minute);
        }
        vector<int> result(k, 0);
        for (const auto& [userId, minutesSet] : userMinutes) {
            int uam = minutesSet.size(); 
            if (uam <= k) {
                result[uam - 1]++; 
            }
        }
        return result;
    }
};