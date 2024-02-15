class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_map <char, bool> hash;
        int n = sentence.size();
        for (int i = 0; i<n; i++){
            hash[sentence[i]] = true;
        }
        for(int i = 0; i<26; i++){
            if (hash['a'+i] == false){
                return false;
            }
        }
        return true;
    }
};