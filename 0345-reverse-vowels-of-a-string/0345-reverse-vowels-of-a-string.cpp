class Solution {
public:
    string reverseVowels(string s) {
        string vowel = "";
        int j = 0;
        for (int i = 0; i<s.size(); i++){
            if (s[i] == 'a'){
                vowel.push_back('a');
                j++;
            }
            if (s[i] == 'o'){
                vowel.push_back('o');
                j++;
            }
            if (s[i] == 'i'){
                vowel.push_back('i');
                j++;
            }
            if (s[i] == 'e'){
                vowel.push_back('e');
                j++;
            }
            if (s[i] == 'u'){
                vowel.push_back('u');
                j++;
            }
            if (s[i] == 'A'){
                vowel.push_back('A');
                j++;
            }
            if (s[i] == 'E'){
                vowel.push_back('E');
                j++;
            }
            if (s[i] == 'I'){
                vowel.push_back('I');
                j++;
            }
            if (s[i] == 'O'){
                vowel.push_back('O');
                j++;
            }
            if (s[i] == 'U'){
                vowel.push_back('U');
                j++;
            }
        }
        j = 1;
        for (int i = 0; i<s.size(); i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'O' || s[i] == 'I' || s[i] == 'E' || s[i] == 'U'){
                s[i] = vowel[vowel.size()-j];
                j++;
            }
        }
        return s;
    }
};