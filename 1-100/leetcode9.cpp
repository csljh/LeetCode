/*
9. Palindrome Number
�һ����������ų�����
Ȼ�����Ƿ���ȣ�
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
