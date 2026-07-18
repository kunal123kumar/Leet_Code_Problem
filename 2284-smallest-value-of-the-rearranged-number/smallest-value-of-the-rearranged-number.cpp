class Solution {
public:
    long long smallestNumber(long long num) {
        bool neg = false;
        if (num < 0) {
            num = abs(num);
            neg = true;
        }
        vector<int> a;
        while (num > 0) {
            a.push_back(num % 10);
            num = num / 10;
        }
        sort(a.begin(), a.end());
        long long ans = 0;
        if (neg == false) {
            for (int i = 0; i < a.size(); i++) {
                if (a[i] != 0) {
                    ans = ans * 10 + a[i];
                    a[i] = INT_MAX;
                    break;
                }
            }
            for (int i = 0; i < a.size(); i++) {
                if (a[i] == INT_MAX) {
                    continue;
                } else {
                    ans = ans * 10 + a[i];
                }
            }

        } else {
            for (int i = a.size() - 1; i >= 0; i--) {
                ans = ans * 10 + a[i];
            }
            ans = -ans;
        }
        return ans;
    }
};