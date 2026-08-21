class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int best = 0;
        int L = 0; 
        int R = n-1;
        int temp = 0;
        while (L < R){
            temp = min(height[L] , height[R]) * (R-L);
            if (height[L] < height[R]){
                L++;
            }else if(height[L] == height[R]){
                L++;
                R--;
            }else{
                R--;
            }

            if (temp > best){
                best = temp;
            }
        }

        return best;
    }
};