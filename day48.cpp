day 48
q: Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        if(nums.size()==1) return;
        int l=0, r=0;
        while(r<nums.size()){
            if(nums[r]!=0){
                swap(nums[l], nums[r]);
                l++;
            }
            r++;
        }
    }
};
