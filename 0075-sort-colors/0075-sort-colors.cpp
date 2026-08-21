class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int pass,i,temp;

    for (pass = 0; pass<n-1 ; pass ++){
        
        for (i = 0; i < n-pass-1 ; i++){
           
            if (nums[i]>nums[i+1]){
                temp = nums[i];
                nums[i] = nums[i+1];
                nums[i+1] = temp;
            }
        }
    }

    }
};