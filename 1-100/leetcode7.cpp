/*
7. Reverse Integer
本题比较简单，一边取一边够造倒序数更加有效率
主要注意判断是否越界，这里使用res/10 == ans 进行判断
*/
class Solution {
public:
    int reverse(int x) {
        int res = 0, index =1, ans=0;
        if(x<0){
            index = -1;
            x = x*(-1);
        }
        while(x!=0){
            res= res*10 + x%10;
            x/=10;
            if (res / 10 != ans)
                return 0;
            ans = res;
        }
        return res*index;
    }
};