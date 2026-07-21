class Solution {
public:
    int minElement(vector<int>& nums) {
        vector<int>vec;
        int n=nums.size();
        
        for(int i=0;i<n;i++)
        {
            int sum=0;
            int x=nums[i];
            while(x!=0)
            {
                int digit=x%10;
                sum+=digit;
                x/=10;
            }
            vec.push_back(sum);
        }
        int minvalue=INT_MAX;
        for(int i=0;i<n;i++)
        {
            minvalue=min(minvalue,vec[i]);
        }
        return minvalue;
    }
};