//题目1、two sum
//本题使用unordered_map来存储已有的数及其对应的序号，然后对于每一个新加入的数num，都查找map中是否存在target-num的数，若存在则输出

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> map;
        for(int i=0;i<nums.size();i++){
            auto index = map.find(target - nums[i]);
            if(index!=map.end()){
                return {index->second,i};// index = map.find()  找到的是map，那么要得到其值，需要->second 
            }
            map[nums[i]]=i;
        }
    }
};