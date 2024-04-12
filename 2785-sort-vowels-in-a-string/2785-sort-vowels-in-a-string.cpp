class Solution {
public:
    string sortVowels(string s) {
        // Separate vowels and consonants
        vector<char> vowels;
        string consonants;
        
        for (char c : s) {
            if (isVowel(c))
                vowels.push_back(c);
            else
                consonants += c;
        }
        
        // Sort the vowels
        sort(vowels.begin(), vowels.end());
        
        // Reconstruct the string
        string result;
        int vowelIndex = 0;
        
        for (char c : s) {
            if (isVowel(c))
                result += vowels[vowelIndex++];
            else
                result += c;
        }
        
        return result;
    }
    
private:
    bool isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
               c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
    }
};