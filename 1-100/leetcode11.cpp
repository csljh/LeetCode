/*������Ҫ����i��j����ָ��ֱ�ָ��������������ˣ�Ȼ������ָ�����м�������
	ÿ�ƶ�һ����һ��ֵ�ͽ���Ƚ�ȡ�ϴ�ģ�
����װˮ�����㷨���ҳ�����������Ե�н�С���Ǹ���������Ե�ľ��룬��������*/

class Solution {
public:
    int maxArea(vector<int>& height) {
        int res = 0, i = 0, j = height.size() - 1;
        while (i < j) {
            res = max(res, min(height[i], height[j]) * (j - i));
            height[i] < height[j] ? ++i : --j;
        }
        return res;
    }
};
