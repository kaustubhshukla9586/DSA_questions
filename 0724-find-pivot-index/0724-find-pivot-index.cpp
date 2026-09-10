class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int rsum = 0;
        int lsum = 0;
        int pivot = -1;

        for (int i = 0; i < n; i++){
            rsum += nums[i];
        }

        for (int i = 0; i < n; i++){
            rsum = rsum - nums[i];
            
            if (i == 0){
                lsum = 0;
            }else{
                lsum = lsum + nums[i-1];
            }
            

            if (rsum == lsum){
                pivot = i;
                break;
            }

        }
        return pivot;
        

    }
};