// https://leetcode.com/problems/lemonade-change

class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int a=0;
        int b=0;
        int c=0;
        for(int i=0;i<bills.size();i++) {
            if(bills[i]==5){
                a++;
            }
            else if(bills[i]==10) {
                b++;
                if(a>0)
                    a--;
                else
                    return false;
            }
            else {
                c++;
                if(a>=1 && b>=1){
                    a--;
                    b--;
                }
                else if(a>=3){
                    a-=3;
                }
                else {
                    return false;
                }
            }
        }
        return true;
    }
};