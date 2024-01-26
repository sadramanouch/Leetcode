class Solution {
public:
     bool detectCapitalUse(string word) {
        if(word[0]<'a'){                                                 //** first letter capital
                int cap = 0;
                for(int i =0;i<word.size();i++){
                    if(word[i]<'a'){
                        cap++;
                    }
                }
                    
                if(cap>1 && cap< word.size()){
                    return false;
                }//** more than 1 capital and less than word length
           }
           else
               for(int i =0;i<word.size();i++){
                   if(word[i]<'a'){
                       return false;
                   }//*** return false if any capital found 
               }
           return true;
    }
};