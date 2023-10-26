class Solution {
public:
    int distMoney(int money, int children) {
        int ans = 0;
        if(children > money){
            return -1;
        }
        vector<int> v(children,1);  
        money -= children;
        for(int i=0 ; i < children-1 ; i++){
            if(money > 6){
                ans++;
                v[i] += 7;    
                money -= 7;
            }
        }
        if(money == 7){
            ans++;
        }   
        else if (money == 3){ 
            if(v[children - 2] == 8){
                ans--;  
            }
        }
        return ans;
    }
};