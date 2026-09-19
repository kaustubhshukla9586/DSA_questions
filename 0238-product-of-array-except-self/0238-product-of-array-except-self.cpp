class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prefix = 1;
        vector<int> answer;

        for(int i = 0; i < nums.size(); i++){
            answer.push_back(prefix);
            prefix = nums[i] * prefix;
        }
    
        int suffix = 1;

        for(int i = nums.size() - 1; i >= 0; i--){
            if(i == nums.size() - 1){
                suffix = nums[i] * suffix;
                continue;
            }else{
                answer[i] *= suffix;
                suffix = nums[i] * suffix;
            }
        }



        return answer;
    }
};