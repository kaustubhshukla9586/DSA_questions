class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        vector<char> chars;

        if(strs.size()>0){
            for(int i = 0; i < 1; i++){
                for(int j = 0; j < strs[i].size(); j++){
                    chars.push_back(strs[i][j]);
                }
            }
        }else{
            string ans  = "";
            return ans;
        }

        int n = -1;
        int k = chars.size(); 

        for(int i = 0; i < strs.size(); i++){
            for(int j = 0; j < chars.size(); j++){
                
                if(j < strs[i].size()){
                    if(chars[j] == strs[i][j]){
                        n = j;
                        continue;
                    }else if(chars[j] != strs[i][j]){
                        n = j-1;
                        break;
                    }
                }else{
                    n = j - 1;
                    break;
                }    
            }
            if(k > n){
                k = n;
            }
            if(n == -1){
                break;
            }
            
        }

        string ans = "";

        if (k == -1){
            return ans;
        }else{
            for(int i = 0; i <= k; i++){
                ans.push_back(chars[i]);
            }
            return ans;
        }



    }
};