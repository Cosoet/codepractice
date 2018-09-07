class Solution {
public:
    int reverse(int x) {
        
        int max = INT_MAX/10; 
        int min = INT_MIN/10;
        int rev =0;
        while (x != 0) {
            int pop = x % 10;
            x /= 10;
            if (rev > max || (rev == max && pop > 7)) return 0;
            if (rev < min || (rev == min && pop < -8)) return 0;
            rev = rev * 10 + pop;
        }
        return rev;
        
    }
};
