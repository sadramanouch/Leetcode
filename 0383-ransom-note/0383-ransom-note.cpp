class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> map;
        for (auto ch : magazine){
            map[ch]++;
        }
        for (const auto &letter : ransomNote){
            if (map.find(letter) != map.end() && map[letter] > 0){
                map[letter]--;
            }else{
                return false;
            }
        }
        return true;
    }
};