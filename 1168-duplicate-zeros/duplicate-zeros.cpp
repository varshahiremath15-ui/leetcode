class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        vector<int>vc;
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            if(arr[i]==0)
            {
                vc.push_back(0);
                vc.push_back(0);
            }
            else
            {
                vc.push_back(arr[i]);
            }
        }
        for(int i=0;i<n;i++)
        {
            arr[i]=vc[i];
        }
        
    }
};