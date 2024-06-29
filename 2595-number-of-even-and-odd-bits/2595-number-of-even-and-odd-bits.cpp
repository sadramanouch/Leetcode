class Solution {
public:
    vector<int> evenOddBit(int n) {
        int even = 0;
        int odd = 0;
        int position = 0; 
        
        while (n > 0) {
            int bit = n & 1; 
            if (bit == 1) {
                if (position % 2 == 0) {
                    even++;
                } 
                else {
                    odd++;
                }
            }
            n >>= 1; 
            position++;
        }
        
        return {even, odd};
    }
};