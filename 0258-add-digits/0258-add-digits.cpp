class Solution {
public:
    int calculateSum(int num) {
        int sum = 0;
        while (num >= 10) {
            sum = sum + num % 10;
            num = num / 10;
        }
        sum += num;
        return sum;
    }
    int addDigits(int num) {
        while (num >= 10) {
            num = calculateSum(num);
        }

        return num;
    }
};