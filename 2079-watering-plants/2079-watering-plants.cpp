class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int n = plants.size();
        int res = 0;
        int tmp = capacity;
        for (int i = 0; i<n; i++){
            if (plants[i] <= capacity){
                capacity -= plants[i];
                res += 1;
            }
            else{
                res += i;
                capacity = tmp;
                res += i+1;
                capacity -= plants[i];
            }
            cout << res << endl;
        }
        return res;
    }
};