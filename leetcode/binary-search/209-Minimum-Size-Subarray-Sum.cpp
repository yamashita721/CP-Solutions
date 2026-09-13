class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum=0;
        int left=0;
        int count=0;
        int maxi=INT_MAX;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            count++;
            
            while(sum>=target){
                maxi=min(maxi,count);
                sum-=nums[left];
                left++;
                count--;
            }
        }
        if(maxi==INT_MAX){
            return 0;
        }
        else{
            return maxi;
        }
    }
};