class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> map;

        for(int i = 0; i < nums.size(); i++){
            map[nums[i]]++;
        }

        int freq = 0;
        int val = nums[0];

        for(auto& [key,value] : map){
            if(freq < value){
                val = key;
                freq = value;
            }
        }

        return val;
    }
};