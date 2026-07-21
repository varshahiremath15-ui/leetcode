class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        int n=nums.size();
        for(int i:nums)
        {
            ans^=i;
        }
        return ans;

        
    }
};