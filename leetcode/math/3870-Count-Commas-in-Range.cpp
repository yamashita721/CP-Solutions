class Solution {
public:
    int countCommas(int n) {
        string s=to_string(n);
        if(s.size()<4){
            return 0;
        }
        else if(s.size()==4){
            return n-1000+1;
        }
        else if(s.size()==5){
            return (9999-1000+1) + (n-10000+1);
        }
        else if(s.size()==6){
            return (9999-1000+1) + (99999-10000+1) +(n-100000+1);
        }
        return 0;
    }
};