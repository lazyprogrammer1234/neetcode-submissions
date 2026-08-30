class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l=0;
        int r=heights.size()-1;
        int max_water=0;
        while(l<r){
            int wt=r-l;
            int ht=std::min(heights[l],heights[r]);
            int curr_water=wt*ht;
            max_water=std::max(max_water,curr_water);
            if(heights[l]<heights[r]){
                l++;
            }
            else{
                r--;
            }
        }
        return max_water;
    }
};