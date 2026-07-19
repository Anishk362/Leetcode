class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) // As per the example 2 : -121 will be 121- when reversed , so every negative no. is not palindrome
        return false;

        else {
        int y = x;
        long rev = 0; // Used long to avoid any overflow

        while(y != 0){  // Simple extraction of digit and reversing
            rev = (rev * 10) + (y % 10);
            y /= 10;
        }

        if(rev == x)
        return true;
        else
        return false;
        }
    }
};