class Solution {
public:
    int maxArea(vector<int>& height) {
        int lb=0;
        int rb=height.size()-1;
        int maxwater=0;
        while(lb<rb){
            int wd=rb-lb;
            int ht=min(height[lb],height[rb]);
            int curwater=wd*ht;
            maxwater=max(maxwater,curwater);
            height[lb]<height[rb]?lb++:rb--;
        }
        return maxwater;
        
    }
};