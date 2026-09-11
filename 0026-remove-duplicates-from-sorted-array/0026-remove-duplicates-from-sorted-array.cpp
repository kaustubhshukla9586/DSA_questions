class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int r = 1;
        int w = 0;
        int count = 1;
        int n = nums.size();

        for (int i = 0; i < n - 1; i++){
            if (r < n){
                if (nums[w] == nums[r]){
                    r++;
                }else if(nums[w] != nums[r]){
                    w++;
                    int temp = nums[w];
                    nums[w] = nums[r];
                    nums[r] = temp;
                    r++;
                    count++;
                }
            }
            
        }

        return count;

    }
};