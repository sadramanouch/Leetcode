class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        std::vector<int> prefixCommonArray;
        std::set<int> seen_in_A, seen_in_B;

        for (size_t i = 0; i < A.size(); ++i) {
            // Add the current elements to the respective sets
            seen_in_A.insert(A[i]);
            seen_in_B.insert(B[i]);

            // Find the intersection of the sets
            std::set<int> common_elements;
            std::set_intersection(
                seen_in_A.begin(), seen_in_A.end(),
                seen_in_B.begin(), seen_in_B.end(),
                std::inserter(common_elements, common_elements.begin())
            );

            // The count of common elements is the size of the intersection
            prefixCommonArray.push_back(common_elements.size());
        }

        return prefixCommonArray;
    }
};