class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> ans;
        string tmp = "";
        for (int i = 1; i<=n; i++){
            if ((i % 3 == 0) && (i % 5 == 0)){
                tmp = "FizzBuzz";
                ans.push_back(tmp);
            }
            else if (i%3==0){
                tmp = "Fizz";
                ans.push_back(tmp);
            }
            else if (i%5==0){
                tmp = "Buzz";
                ans.push_back(tmp);
            }
            else{
                tmp = to_string(i);
                ans.push_back(tmp);
            }
        }
        return ans;
    }
};