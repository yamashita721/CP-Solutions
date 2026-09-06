class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size();
        if(n==0) return true;
        string fix;
        for(char c:s){
            if(isalnum(c)){
                fix+=tolower(c);
            }
        }
        int left=0;
        int right=fix.size()-1;
        while(left<right){
            if(fix[left]!=fix[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};