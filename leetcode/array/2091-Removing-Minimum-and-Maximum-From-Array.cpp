class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        vector<int> org=nums;
        sort(org.begin(),org.end());
        int n=nums.size();
        int mini=org[0];
        int maxi=org[n-1];
        int pmax,pmin;
        for(int i=0;i<n;i++){
            if(nums[i]==maxi){
                pmax=i;
            }
            if(nums[i]==mini){
                pmin=i;
            }
        }
        int bothfront=max(pmax,pmin)+1;
        int bothback=n-min(pmax,pmin);
        int minfrontback=(pmin+1) + (n-pmax);
        int maxfrontback=(pmax+1) + (n-pmin);
        return min({
            bothfront,bothback,minfrontback,maxfrontback
        });
    }
};