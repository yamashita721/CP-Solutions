class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string check=strs[0];
        
        for(int i=1; i<strs.size(); i++){
            int maxi=0;
            while(maxi<check.size() && maxi<strs[i].size() && check[maxi]==strs[i][maxi]){
                maxi++;
            }
            check=check.substr(0,maxi);
        }
        return check;
    }
};