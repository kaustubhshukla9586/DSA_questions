class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        int n = nums.size();    
        k = k % n;

        myReverse(nums, 0, n - 1);
        myReverse(nums, k, n - 1);
        myReverse(nums, 0, k - 1);
    }

    void myReverse(vector<int>& nums, int start, int end) {
            
            while (end > start){
                int temp = nums[start];
                nums[start] = nums[end];
                nums[end] = temp;
                start++;
                end--;
            }
        }

};