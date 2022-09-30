class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int ,int > sum;
        for(int i=0;i<nums.size();i++)
        {
            int find=target-nums[i];
            if(sum.count(find))
            {
                map<int,int> ::iterator t=sum.find(find);
                cout<<t->first;
                return vector<int >{t->second,i};
            }
            else sum[nums[i]]=i;
        }
        return vector<int>();
    }
};
