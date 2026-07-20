class Solution {
    public int singleNonDuplicate(int[] nums) {

        int st = 0;
        int ed = nums.length - 1;

        while (st < ed) {

            int mid = st + (ed - st) / 2;

            // Make mid even
            if (mid % 2 == 1) {
                mid--;
            }

            if (nums[mid] == nums[mid + 1]) {
                st = mid + 2;
            } else {
                ed = mid;
            }
        }

        return nums[st];
    }
}