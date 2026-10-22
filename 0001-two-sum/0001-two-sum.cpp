class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;

        unordered_map<int,int> num; // value - indice;

        for(int i = 0; i < nums.size(); i++){
            num[nums[i]] = i;
        }
        // Hashmap fully made of the array;

        for(int i = 0; i < nums.size(); i++){
            if(num.contains(target - nums[i])){
                if(num.at(target-nums[i]) != i){
                    ans.push_back(i);
                    ans.push_back(num.at(target-nums[i]));
                    break;
                }    
            }
        }  

        return ans;      
    }
};