class Solution {
public:
    int firstUniqChar(string s) {
        
        unordered_map<char,int> freq;

        for(int i = 0; i < s.size(); i++){
            freq[s[i]] += 1;
        } // Making the hash map with the frequency of that letter

        for(int i = 0; i < s.size(); i++){
            if(freq[s[i]] == 1){ //
            // Here we are actually checking if that letter has frequency of 1 if yes then we print it, this wont print further letters because the hashmap is ordered in the way which string characters are arranged.
                return i;
            }
        }

        return -1;
        
        
    }
};