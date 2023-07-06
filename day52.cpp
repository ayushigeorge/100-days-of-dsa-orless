day 52
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set <int>i;
        for(int n=0; n<nums.size();n++){
            i.insert(nums[n]);
        }
        int ans= i.size();
        nums.clear();
        for(auto n:i){
            nums.push_back(n);
        }
        return ans;
    }
};
