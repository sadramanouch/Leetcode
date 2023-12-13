class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<int> originalScores(score.begin(), score.end());
        sort(score.begin(), score.end(), greater<int>());
        vector<string> result(score.size());
        unordered_map<int, string> rankMap;
        for (int i = 0; i < score.size(); ++i) {
            if (i == 0) {
                rankMap[score[i]] = "Gold Medal";
            } else if (i == 1) {
                rankMap[score[i]] = "Silver Medal";
            } else if (i == 2) {
                rankMap[score[i]] = "Bronze Medal";
            } else {
                rankMap[score[i]] = to_string(i + 1);
            }
        }
        for (int i = 0; i < originalScores.size(); ++i) {
            result[i] = rankMap[originalScores[i]];
        }
        return result;
    }
};