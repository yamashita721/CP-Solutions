class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double maxi=INT_MIN;
        int count=0;
        int left=0;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            count++;
            if(count==k){
                double val=sum/double(k);
                maxi=max(maxi,val);
                sum-=nums[left];
                left++;
                count--;
            }
        }
        return maxi;
    }
};