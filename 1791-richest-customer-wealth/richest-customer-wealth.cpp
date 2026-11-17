class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max=INT_MIN;
        for(int i=0;i<accounts.size();i++)
        {
             int rowsum=0;
            for(int j=0;j<accounts[i].size();j++)
            {
               rowsum+=accounts[i][j];
            }
        if(rowsum>max)max=rowsum;
        }
        return max;
    
        
    }
};