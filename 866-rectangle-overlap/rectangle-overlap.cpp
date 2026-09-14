class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        //to find overlapping ,we need to find common area if there is any 
        //necessary conditions -> if CA>0 -> return true 
                                //else return false (CA<0 || CA==0)
        int common_width = min(rec1[2],rec2[2])-max(rec1[0],rec2[0]);
        int common_height = min(rec1[3],rec2[3]) -max(rec1[1],rec2[1]);
        //int common_area = common_height * common_width;
        // return common_area>0;
        return common_width>0 && common_height>0;
    }
};