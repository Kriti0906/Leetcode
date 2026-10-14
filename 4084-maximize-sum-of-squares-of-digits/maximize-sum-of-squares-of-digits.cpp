class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        if (sum > 9 * num)
            return "";
        string ans = "";
        for (int i = 0; i < num; i++) {
            int d = min(9, sum);
            ans += to_string(d);
            sum -= d;
        }
        if (sum > 0)
            return "";
        return ans;
    }
};