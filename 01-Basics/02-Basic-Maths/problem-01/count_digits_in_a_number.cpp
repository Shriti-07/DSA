// Optimal — O(1)
class Solution {
public:
    int countDigit(int x) {
        if (x == 0) {
            return 1;
        }
        x = abs(x);
        return 1 + (int)log10(x);
    }
};

// Brute force — O(log10(n))
class SolutionBrute {
public:
    int countDigit(int x) {
        x = abs(x);
        int c = 0;
        do {
            c++;
            x = x / 10;
        } while (x != 0);
        return c;
    }
};