class Solution {
public:
    double myPow(double x, int n) {
        double res = bin (x,abs(n));
        return (n < 0) ? (1/res) : res;
    }
    
    double bin (double x, int n){
        if (n == 1) return x;
        if (n == 0) return 1.0;
        double result =  bin(x,n/2);
        result *= result;
        if (n % 2){
            result *= x;
        }
        return result;
    }
};