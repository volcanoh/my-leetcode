class Solution {
public:
  vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> result;
    std::map<int, int>iMap;

    for(auto it = nums.begin(); it != nums.end(); ++it)
      {
       
        int pairNum = target - *it;
        auto tmpPair = iMap.find(pairNum);
        if(tmpPair != iMap.end())
          {
            int first = it -nums.begin();
            int second = tmpPair->second;
            if(first > second)
              {
                result.push_back(second);
                result.push_back(first);
              }
            else{
              result.push_back(first);
              result.push_back(second);
            }

            break;
          }
        iMap.insert(std::pair<int, int>(*it, it - nums.begin()));
      }
    return result;
  }
};
