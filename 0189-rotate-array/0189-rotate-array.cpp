class Solution {
public:
    void r(vector<int>& nums, int start, int end){
        while(start<end){
            swap(nums[start++],nums[end--]);
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        r(nums,0,n-1);
        r(nums,0,k-1);
        r(nums,k,n-1);   
    }
};