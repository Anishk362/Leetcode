class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || (x % 10 == 0 && x != 0)) // All negative as per example 2: -121 will be 121- so not a palindrome
        return false;                        // Numbers ending 0: like 10, 100 etc are not palindrome as ex 3 but 0 is 


        long reversedNum = 0; // long to avoid any overflow.
        int originalNum = x;
        while (x > 0) //Simple Extraction of Digits and reversing number
        {
            reversedNum = (reversedNum * 10) + (x % 10);
            x /= 10;
        }
        return (originalNum == reversedNum);
    }
};