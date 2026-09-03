class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int mini=INT_MAX;
        for(auto x:nums1){
            mini=min(mini,x);
        }
        if(mini%2!=0){
            return true;
        }
        else{
            bool even=true;
            for(auto p:nums1){
                if(p%2!=0){
                    even=false;
                    break;
                }
            }
            if(even){
                return true;
            }
            else{
                return false;
            }
        }
    }
};