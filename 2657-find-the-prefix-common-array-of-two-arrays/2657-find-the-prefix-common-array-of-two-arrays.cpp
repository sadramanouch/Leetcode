class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        vector<int> prefixCommonArray;
        set<int> seen_in_A, seen_in_B;
        for (size_t i = 0; i < A.size(); ++i) {
            seen_in_A.insert(A[i]);
            seen_in_B.insert(B[i]);
            set<int> common_elements;
            set_intersection(
                seen_in_A.begin(), seen_in_A.end(),
                seen_in_B.begin(), seen_in_B.end(),
                inserter(common_elements, common_elements.begin())
            );
            prefixCommonArray.push_back(common_elements.size());
        }
        return prefixCommonArray;
    }
};