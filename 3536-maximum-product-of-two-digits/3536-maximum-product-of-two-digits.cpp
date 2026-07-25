class Solution {
public:
    int maxProduct(int n) {
        int fi=0;
        int sec=0;
        while(n>0){
        int dig= n%10;
        if(dig>=fi)
        {
            sec = fi;
            fi=dig;
        }
        else if(dig>sec)
        {
           sec=dig; 
        }
         n= n/10;
        }
        return fi*sec;

        
        
    }
};