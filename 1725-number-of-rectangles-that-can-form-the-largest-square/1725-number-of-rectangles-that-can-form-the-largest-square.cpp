class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        int n = rectangles.size();
        vector<int> arr(n);
        for (int i = 0; i<n; i++){
            int tmp = min(rectangles[i][0], rectangles[i][1]);
            arr.push_back(tmp);
        }
        sort(arr.begin(), arr.end());
        int res = 1;
        for (int i = arr.size()-1; i>0; i--){
            if (arr[i] == arr[i-1]){
                res++;
            }
            else{
                break;
            }
        }
        return res;
    }
};