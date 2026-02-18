class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
            int curr= nums[i];
            m[curr]++;
            if(m[curr]>1){
                return curr;
            }
        }
        return -1;
        
    }
};