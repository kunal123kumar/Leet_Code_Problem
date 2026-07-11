class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if(n==1){
            return 1;
        }
        unordered_map<int, int> m;
        unordered_map<int, int> p;
        for (int i = 0; i < trust.size(); i++) {
            int a = trust[i][0];
            int b = trust[i][1];
            if (p.find(a) == p.end()) {
                p[a]++;
            }
            m[b]++;
        }
        for (auto& i : m) {
            if (i.second == n - 1) {
                if (p.find(i.first) == p.end()) {
                    return i.first;
                }
            }
        }
        return -1;
    }
};