class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        int m = score.size();
        int n = score[0].size();
        vector<pair<int, int>> srt(m); // Store (score, original index) pairs
        
        // Step 1: Extract the kth exam scores into the vector 'srt' along with their original indices
        for (int i = 0; i < m; i++) {
            srt[i] = {score[i][k], i};
        }
        
        // Step 2: Sort the scores in descending order
        sort(srt.begin(), srt.end(), greater<pair<int, int>>());
        
        // Step 3: Create a result matrix to store the sorted students
        vector<vector<int>> result(m, vector<int>(n));
        
        // Step 4: Iterate through the sorted scores and assign corresponding rows from the original matrix
        for (int i = 0; i < m; i++) {
            int idx = srt[i].second; // Get the original index of the student with the current score
            
            // Assign the row corresponding to the student with the current score to the result matrix
            for (int p = 0; p < n; p++) {
                result[i][p] = score[idx][p];
            }
        }
        
        return result;
    }
};
