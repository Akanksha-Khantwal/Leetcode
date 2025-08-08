class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0; // New length (number of elements not equal to val)

        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] != val) {
                nums[k] = nums[i];
                k++;
            }
        }

        return k;
    }
};
