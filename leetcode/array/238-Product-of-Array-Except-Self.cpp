class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> v(n);
        int left=1;
        for(int i=0;i<nums.size();i++){
            v[i]=left;
            left*=nums[i];
        }
        int right=1;
        for(int i=n-1;i>=0;i--){
            v[i]*=right;
            right*=nums[i];
        }
        return v;
    }
};