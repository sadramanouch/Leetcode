#include <algorithm> // Include the <algorithm> header for std::sort
#include <vector>
#include <cmath>     // Include the <cmath> header for std::abs

class Solution {
public:
    int minMovesToSeat(std::vector<int>& seats, std::vector<int>& students) {
        std::sort(seats.begin(), seats.end());
        std::sort(students.begin(), students.end());
        int n = seats.size();
        int res = 0;
        for (int i = 0; i < n; i++) {
            res += std::abs(seats[i] - students[i]);
        }
        return res;
    }
};
