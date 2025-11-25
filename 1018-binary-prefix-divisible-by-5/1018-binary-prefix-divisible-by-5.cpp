class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        vector<bool>r;
        int s=0;

        for(int i=0;i<nums.size();i++){
            s=((s*2)+nums[i])%5;
            r.push_back(s==0);
        }
        return r;
    }
};