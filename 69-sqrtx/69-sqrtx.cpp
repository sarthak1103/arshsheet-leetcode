class Solution {
public:
         int mySqrt(int x) {
        if (x <= 1)
            return x;
        if (x < 0)
            return INT_MAX;
        int l = 0, h = x, ans;
        while (l <= h) {
            int mid = l + (h - l) / 2;
            if (mid <= (x / mid)) {
                ans = mid;
                l = mid + 1;
            } else {
                h = mid - 1;
            }
        }
        return ans;
    }
};