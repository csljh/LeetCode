/*
9. Palindrome Number
找回文数，先排除负数
然后倒序看是否相等？
*/
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        if(x==0)
            return true;
        int y = 0;
        int x1 = x;
        while(x1!=0){
            if((y*10 + x1%10) > INT_MAX)
                return false;
            y = y*10 + x1%10;
            x1 = x1/10;
        }
        if(x==y)
            return true;
        return false;
    }
};
