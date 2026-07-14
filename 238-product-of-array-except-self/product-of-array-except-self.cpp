class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>p;
        int product = 1;
        for(int i = 0;i < nums.size();i++){
            p.push_back(product);
            product = product * nums[i];
        }
        vector<int>s(nums.size(),1);
        product = 1;
        for(int i = nums.size()-1 ; i >= 0;i--){
            s[i]=product;
            product = product * nums[i];
        }
        for(int i =0;i<nums.size();i++){
            nums[i] = p[i] * s[i];
        }
        return nums;
    }
};