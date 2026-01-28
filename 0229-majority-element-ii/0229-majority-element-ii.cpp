class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> r;
        unordered_map<int,int> mp;
        for(int i:nums){
            mp[i]++;

        }
        int n =nums.size();
        for(auto& p:mp){
            if(p.second>n/3){
                r.push_back(p.first);
            }
        }
        return r;
    }
};