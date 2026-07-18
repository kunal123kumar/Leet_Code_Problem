class Solution {
public:
    string convert(int m) {
        string a = to_string(m);
        int n = a.length();
        while (n < 4) {
            a = "0" + a;
            n = a.length();
        }

        return a;
    }
    int generateKey(int num1, int num2, int num3) {
        string a = convert(num1);
        string b = convert(num2);
        string c = convert(num3);

        string ans = "";
        int i = 0;
        while (i < 4) {
            ans = ans + min({a[i] , b[i] , c[i] });
            i++;
        }
        return stoi(ans);
    }
};