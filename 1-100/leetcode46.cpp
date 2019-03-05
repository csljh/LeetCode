class Solution {
public:
    vector<vector<int>> permute(vector<int>& num) {
        vector<vector<int>> res{{}};
        for (int a : num) {
            for (int k = res.size(); k > 0; --k) {
                vector<int> t = res.front();
                res.erase(res.begin());
                for (int i = 0; i <= t.size(); ++i) {
                    vector<int> one = t;
                    one.insert(one.begin() + i, a);
                    res.push_back(one);
                }
            }
        }
        return res;
    }
