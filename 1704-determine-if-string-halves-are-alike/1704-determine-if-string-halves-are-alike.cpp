class Solution {
public:
    bool halvesAreAlike(string s) {
        int n = s.size(); 
        int tmp = n/2;
        int a = 0;
        int b = 0;
        for (int i = 0; i<n;i++){
            if (i < tmp){
                if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i'|| s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'){
                    a++;
                }
            }
            else{
                if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i'|| s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'){
                    b++;
                }
            }
        }
        cout<<a;
        cout<<b;
        return a == b;
    }
};