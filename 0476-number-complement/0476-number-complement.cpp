class Solution {
public:
    int findComplement(int n) {

        int ans = 0;long long mul = 1;

        while (n) {
            int rem = n % 2;
            cout << rem << " ";
            ans +=( rem == 1 ? mul * 0 : 1 * mul);
            cout << ans << endl;
            mul *= 2;
            n = n / 2;
        }

        cout << ans;
        return ans;
    }
};