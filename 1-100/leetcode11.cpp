/*我们需要定义i和j两个指针分别指向数组的左右两端，然后两个指针向中间搜索，
	每移动一次算一个值和结果比较取较大的，
容器装水量的算法是找出左右两个边缘中较小的那个乘以两边缘的距离，代码如下*/

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
