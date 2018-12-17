//��Ŀ1��two sum
//����ʹ��unordered_map���洢���е��������Ӧ����ţ�Ȼ�����ÿһ���¼������num��������map���Ƿ����target-num�����������������

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> map;
        for(int i=0;i<nums.size();i++){
            auto index = map.find(target - nums[i]);
            if(index!=map.end()){
                return {index->second,i};// index = map.find()  �ҵ�����map����ôҪ�õ���ֵ����Ҫ->second 
            }
            map[nums[i]]=i;
        }
    }
};