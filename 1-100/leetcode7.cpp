/*
7. Reverse Integer
����Ƚϼ򵥣�һ��ȡһ�߹��쵹����������Ч��
��Ҫע���ж��Ƿ�Խ�磬����ʹ��res/10 == ans �����ж�
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