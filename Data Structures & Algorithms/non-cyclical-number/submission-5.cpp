class Solution {
public:
    bool isHappy(int n) {

        while (n != 1 && n != 4) {

            int sum = 0;

            // Find sum of squares of digits
            while (n != 0) {
                int rem = n % 10;
                sum += rem * rem;
                n = n / 10;
            }

            // Use the calculated sum as the new number
            n = sum;
        }

        // 1 means happy, 4 means cycle
        return n == 1;
    }
};