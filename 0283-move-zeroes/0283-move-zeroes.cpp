class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();

        // for(int i = 0; i < n; i++){
        //     if (nums[i] == 0){
        //         nums.erase(nums.begin() + i);
        //         nums.push_back(0);
        //     }else if(nums[i-1] == 0){
        //         nums.erase(nums.begin() + (i-1));
        //         nums.push_back(0);
        //     }else if(nums[i+1] == 0){
        //         nums.erase(nums.begin() + (i+1));
        //         nums.push_back(0);
        //     }
        // }

        for(int i = n-1; i >= 0; i--){
            if(nums[i] == 0){
                nums.erase(nums.begin() + i);
                nums.push_back(0);
            }
        }
    }
};