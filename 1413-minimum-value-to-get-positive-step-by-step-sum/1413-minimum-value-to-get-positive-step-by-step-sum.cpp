class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int sum=0;
        int ans=0;
        for(auto i:nums){
            sum+=i;
            ans=min(ans,sum);
        }
        return -ans+1;
                       
            

        
    }
};