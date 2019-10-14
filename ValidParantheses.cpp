class Solution {
public:
    bool isMatch(char a, char b){
        if(a=='('){
            if(b==')')
                return 1;
            else
                return 0;
        }
        else if(a=='{'){
            if(b=='}')
                return 1;
            else
                return 0;
        }
        else if(a=='['){
            if(b==']')
                return 1;
            else
                return 0;
        }
        return 0;
    }
    bool isValid(string s) {
        int k=s.size();
        if((k)%2!=0||s.size()==1)
            return 0;
        bool flag;
        while(s.size()>0)
        {
            flag =1;
            //cout<<"1"<<",";
            for(int i=0;i<s.size()-1;i++){
                    if(isMatch(s[i],s[i+1]))
                    {
                        s.erase(i,2);
                        i--;
                        flag=0;
                    }
                //cout<<i<<","<<s.size()<<endl;
                if(s.size()==0)
                    break;
                }
                if (flag)
                    return 0;   
        }
        return 1;
    }
};
