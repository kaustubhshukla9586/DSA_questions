class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        vector<string> s;
        
        for(int i = 0; i < strs.size(); i++){
            s.push_back(strs[i]);
            sort(s[i].begin(), s[i].end());

        }
    
        unordered_map<string, vector<string>> mp;
        for(int i = 0; i < strs.size(); i++){
            mp[s[i]].push_back(strs[i]);
        }

        vector<vector<string>> ans;
        for(auto& pair : mp){
            ans.push_back(pair.second);
        }
        return ans;

    }


};

