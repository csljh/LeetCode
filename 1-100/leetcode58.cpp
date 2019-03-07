//从后往前，去空格
class Solution {
public:
    int lengthOfLastWord(const char *s) {
        int len = strlen(s);
        int left = 0;
        int right = len - 1;
        int count = 0;
        while (s[left] == ' ') ++left;
        while (s[right] == ' ') --right;
        for (int i = left; i <= right; ++i) {
            if (s[i] == ' ') count = 0;
            else ++count;
        }
        return count;
    }
};
