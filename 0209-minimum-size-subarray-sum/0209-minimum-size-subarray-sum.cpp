class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) { 
        
        int right = 0;
        int left = 0;
        int curr_sum = 0;
        int window = INT_MAX;

        while(right <= nums.size() - 1 ){
            curr_sum += nums[right];
            while(curr_sum >= target){
                window = min(window, right - left + 1);
                curr_sum -= nums[left];
                left++;
                
            }
            right++;
        }

        if(window > nums.size()){
            return 0;
        }else{
            return window;
        }

    }
};