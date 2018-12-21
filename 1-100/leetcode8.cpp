/*
8. String to Integer (atoi)
本题比较简单，按顺序编写即可
先找到非空位置，再看符号位，然后算数值
*/
class Solution {
public:
    int myAtoi(string str) {
        long res = 0;
        int sign = 1, ind = str.find_first_not_of(' ');
        
        if (str[ind] == '+' || str[ind] == '-') sign = str[ind++] == '+' ? 1 : -1;
        
        while (ind < str.length() && isdigit(str[ind])) {
            res = res * 10 + (str[ind++] - '0');
            if (res * sign > INT_MAX) return INT_MAX;
            if (res * sign < INT_MIN) return INT_MIN;
        }
        
        return res * sign;
    }
};