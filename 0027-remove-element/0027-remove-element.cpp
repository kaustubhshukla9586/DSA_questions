class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // for (int i = 0; i < nums.size(); i++){
        //     if (nums[i] == val){
        //         nums.erase(i);
        //     }
        // }

        std::erase(nums, val);
        return nums.size();
    }
};