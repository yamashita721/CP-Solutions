class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int m=nums1[0];
        bool has=false;
        for(int v: nums1){
            if(v<m){
                m=v;
            }
            if(v&1){
                has=true;
            }
        }
        if(m&1){
            return true;
        }
        return !has;
    }
};