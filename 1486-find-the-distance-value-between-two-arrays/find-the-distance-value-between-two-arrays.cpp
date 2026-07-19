class Solution {
public:
    bool find(vector<int>& arr2, int d, int t) {
        int s = 0;
        int e = arr2.size() - 1;

        while (s <= e) {
            int mid = s + (e - s) / 2;

            if (abs(arr2[mid] - t) <= d)
                return true;

            if (arr2[mid] < t)
                s = mid + 1;
            else
                e = mid - 1;
        }

        return false;
    }

    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        sort(arr2.begin(), arr2.end());

        int c = 0;

        for (int x : arr1) {
            if (!find(arr2, d, x))
                c++;
        }

        return c;
    }
};