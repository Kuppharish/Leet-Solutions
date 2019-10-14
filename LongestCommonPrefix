class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string S;
        int mini = 100000;
        if (strs.size()==0)
            return S;
        for(int i=0;i<strs.size();i++)
        {
            int sz = strs[i].size();
            mini = min(mini,sz);
        }
        for(int i=0;i<mini;i++)
        {
            bool flag=1;
            string temps = strs[0];
            char temp = temps[i];
            for(int j=0;j<strs.size();j++)
            {
                string temps2 = strs[j];
                char temp2 = temps2[i];
                //cout<<temp<<","<<temp2;
                if(temp2!=temp)
                {flag=0;
                break;}
            }
            if(flag==1)
                S+=temp;
            else
                break;
        }
        return S;
    }
};
