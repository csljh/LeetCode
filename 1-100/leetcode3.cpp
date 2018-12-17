/*
��һ����Ҫ�õ�����������
1������vector<int> mark(256, -1) ��ʾmap
2�����Ӵ��Ĳ��ԣ�������ͬ��Ԫ�أ��򽫿�ʼ�ĵط�����Ϊǰһ����ͬԪ�ش����������濪ʼ��
*/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> mark(256, -1);
        int maxLen = 0, start = -1;
        for(int i=0; i<s.length();i++){
            if(mark[s[i]]>start)
                start = mark[s[i]];
            mark[s[i]] = i;
            maxLen = max(maxLen,i-start);
        }
        return maxLen;
    }
};
