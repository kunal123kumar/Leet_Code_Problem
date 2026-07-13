class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 0;
        int sum = 0;
        vector<int> ans;
        for (int i = digits.size() - 1; i >= 0; i--) {
            if (i == digits.size() - 1) {
                sum = digits[i] + 1;
                if (sum > 9) {
                    ans.push_back(sum % 10);
                    carry = sum / 10;
                } else {
                    ans.push_back(sum);
                }
            } else {
                sum = digits[i] + carry;
                if (sum > 9) {
                    ans.push_back(sum % 10);
                    carry = sum / 10;
                } else {
                    ans.push_back(sum);
                    carry = 0;

                }
            }
        }
        if(carry > 0){
            ans.push_back(carry);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};