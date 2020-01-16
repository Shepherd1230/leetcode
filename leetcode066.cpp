class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> results;

        int tag=1;//all 9
        for(int i=0;i<digits.size();i++)
        {
            if(digits.at(i)!=9)
            {
                tag=0;  //not all 9
                break;
            }
        }

        //all 9
        if(tag==1)
        {
            digits.push_back(0);
            digits.at(0)=1;
            for(int i=1;i<digits.size();i++)
            {
                digits.at(i)=0;
            }
            return digits;
        }

        for(int i=digits.size()-1, temp=1;i>=0;i--)
        {
            digits.at(i)=digits.at(i)+temp;
            if(digits.at(i)>9)
            {
                temp=1;
                digits.at(i)=0;
                // break;
            }
            else
            {
                break;
            }
        }
        return digits;
    }
};
