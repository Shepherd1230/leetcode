class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int len=0;
        for(int i=-1,j=0;j<nums.size();j++)
        {
            if(nums.at(j)!=val)
            {
                i++;
                nums.at(i)=nums.at(j);
            }
            len=i+1;
        }
        return len;
    }
};
