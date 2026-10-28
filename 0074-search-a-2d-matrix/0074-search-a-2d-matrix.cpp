class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        // for(int i = 0; i < matrix.size(); i++){

        //     // int beg = 0;
        //     // int end = matrix[i].size();
        //     // int mid = (end-beg)/2;

        //     if(binary_search(matrix[i].begin(),matrix[i].end(),target)){
        //         return true;
        //     }
        // }

        // return false;
        //-----------------------------------------------

        int m = matrix.size();
        int n = matrix[0].size();
        int beg = 0, end = m*n - 1;

        while(beg <= end){
            int mid = (beg + end) / 2;
            int val = matrix[mid/n][mid%n]; 

            // mid/n used for the rows 
            
            if(val == target) {
                return true;
            }
            else if(val < target) {
                beg = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }
        return false;
        


    }
};