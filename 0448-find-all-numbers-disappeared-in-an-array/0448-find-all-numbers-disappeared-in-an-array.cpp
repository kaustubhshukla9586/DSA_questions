class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {

        vector<bool> ans(nums.size()+1,false);

        for(auto num:nums){
            if(num<ans.size()){
                ans[num] = true;
            }
        }

        vector<int> answer;

        for(int i=1;i<ans.size();i++){
            if(ans[i]==false)answer.push_back(i);
        }

        return answer;
    }
};