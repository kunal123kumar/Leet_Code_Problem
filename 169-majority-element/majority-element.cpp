class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int fre = 1;
        int ans = nums[0];
        for(int i =1;i<nums.size();i++){
            if(fre==0){
                ans = nums[i];
                fre++;
            }else{
                if(nums[i]==ans){
                    fre++;
                }else{
                    fre--;
                }
            }
        }
        return ans;
    }
};