class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> b(nums);
        sort(nums.begin(), nums.end());
        vector<int> a;
        int i = 0;
        int j = nums.size() - 1;
        while (i < j) {
            if (nums[i] + nums[j] == target) {
                a.push_back(nums[i]);
                a.push_back(nums[j]);
                break;
            }
            if (nums[i] + nums[j] < target) {
                i++;
            } else {
                j--;
            }
        }
        for (int i = 0; i < b.size(); i++) {
            if (b[i] == a[0]) {
                a[0] = i;
                break;
            }
        }
        for (int i = 0; i < b.size(); i++) {
            if (b[i] == a[1]) {
                if(a[0]==i){
                    continue;
                }
                a[1] = i;
                break;
            }
        }
        return a;
    }
};