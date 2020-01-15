class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int len=0;
        if(nums.size()<=1) return nums.size();
        for(int i=0,j=1;j<nums.size();j++)
        {
            if(nums.at(j)>nums.at(i))
            {
                i++;
                nums.at(i)=nums.at(j);
            }
            len=i+1;
        }
        return len;
    }
};
