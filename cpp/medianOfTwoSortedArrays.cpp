class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        for(auto it = nums2.begin(); it != nums2.end(); it++)
            nums1.push_back(*it);
        std::sort(nums1.begin(), nums1.end());
        int size = nums1.size();
        if(size&0x1)
            return  (double)(nums1.at(size / 2));
        else
            return (double)((nums1.at(size / 2) + nums1.at(size / 2 - 1)) / 2.0);
    }
};
