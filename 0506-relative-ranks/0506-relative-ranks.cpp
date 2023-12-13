class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        std::vector<int> originalScores(score.begin(), score.end());
        std::sort(score.begin(), score.end(), std::greater<int>());

        std::vector<std::string> result(score.size());
        std::unordered_map<int, std::string> rankMap;

        for (int i = 0; i < score.size(); ++i) {
            if (i == 0) {
                rankMap[score[i]] = "Gold Medal";
            } else if (i == 1) {
                rankMap[score[i]] = "Silver Medal";
            } else if (i == 2) {
                rankMap[score[i]] = "Bronze Medal";
            } else {
                rankMap[score[i]] = std::to_string(i + 1);
            }
        }

        for (int i = 0; i < originalScores.size(); ++i) {
            result[i] = rankMap[originalScores[i]];
        }

        return result;
    }
};