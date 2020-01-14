class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
	
	string prefix="";
	
	if(strs.size()==0)
	{
		return  prefix;
	}
	
	if(strs.size()==1)
	{
		prefix=strs.at(0);
		return prefix;
	}
	
	string str1=strs.at(0);
	for(int i=1;i<strs.size();i++)
	{
		prefix="";
		
		string str2=strs.at(i);
		for(int j=0; j<str1.size() && j<str2.size();j++)
		{
			if(str1.at(j)!=str2.at(j))
			{break;}

			if(str1.at(j)==str2.at(j))
			{
				//cout<<"str1="<<str1<<"\t"<<"str2="<<str2<<endl;
				//cout<<"j="<<j<<endl;
				//cout<<str1.at(j)<<endl<<endl;
				prefix=prefix+str1.at(j);
			}
		}
		str1=prefix;
	}
    return prefix;
    }
};
