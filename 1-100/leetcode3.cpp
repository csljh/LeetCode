/*
这一题主要用到两个方法：
1、利用vector<int> mark(256, -1) 表示map
2、找子串的策略：遇到相同的元素，则将开始的地方设置为前一个相同元素处（从它后面开始）
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
