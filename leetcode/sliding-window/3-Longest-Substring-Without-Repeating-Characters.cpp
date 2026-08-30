class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> m;
        int n=s.size();
        int left=0;
        int maxi=0;
        for(int i=0;i<n;i++){
            while(m.count(s[i])){
                m.erase(s[left]);
                left++;
            }
            m.insert(s[i]);
            maxi=max(maxi,i-left+1);
        }
        return maxi;
    }
};