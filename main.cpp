class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> sortedArray(heights);
        int count = 0;
        
        sort(sortedArray.begin(), sortedArray.end());
        
        for (int i = 0; i < heights.size(); ++i) {
            if (sortedArray[i] != heights[i]) {
                count++;
            }
        }
        
        return count;
    }
};
