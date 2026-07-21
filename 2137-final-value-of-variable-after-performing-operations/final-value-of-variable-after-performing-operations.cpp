class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int X=0;
        for(string val:operations){
            if(val=="++X"||val=="X++")
            {
                X++;
            }
            else if(val=="--X"||val=="X--")
            {
                X--;
            }
        }
        return X;
    }
};