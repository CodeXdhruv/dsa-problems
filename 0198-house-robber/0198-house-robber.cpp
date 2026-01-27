class Solution {
public:
    int maxCost(vector<int>& nums, int n, vector<int>& dp){
        if(n<0){
            return 0;
        }
        if(n==0) return nums[0];
        // dp[0]=nums[0];
        if(dp[n]!=-1) return dp[n];
        return dp[n]=max(maxCost(nums,n-1,dp),nums[n]+maxCost(nums,n-2,dp));
    }
    int rob(vector<int>& nums) {

        int n = nums.size();
        if(n==0)return 0;
        vector<int> dp(n,-1);
        return maxCost(nums,n-1,dp);
    }
};