// As written — counts all divisors up to sqrt(n)
class Solution {
public:
    bool isPrime(int n) {
        if (n <= 1) {
            return false;
        }
        int c = 0;
        for (int x = 1; (long long)x * x <= n; x++) {
            if (n % x == 0) {
                c++;
            }
        }
        return c == 1;
    }
};

// Faster — exits as soon as a divisor is found
class SolutionOptimal {
public:
    bool isPrime(int n) {
        if (n <= 1) {
            return false;
        }
        for (int x = 2; (long long)x * x <= n; x++) {
            if (n % x == 0) {
                return false;
            }
        }
        return true;
    }
};