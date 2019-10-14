class Solution {
public:
    vector<string> generateParenthesis(int n) {
        int open = n,closed =n;
        //bool curr=1;
        string curr;
        vector<string> S;
        if(n == 0)
            return {{""}};
        curr+='(';
        open--;
        vector <char> mapping = {'(',')'};
        gprec(open,closed,curr,S,mapping,n);
        return S; 
    }
    void gprec(int open,int closed,string curr, vector<string> &S, vector<char> &mapping,int n){
        if(curr.size() == 2*n){
            S.push_back(curr);
            return;
        }
        if(open<closed&&open!=0){
            for(int i =0;i<2;i++){
                gprec(open-(1-i),closed-i,curr+mapping[i],S,mapping,n);
            }
        }
        else if(open>=closed&&open!=0){ 
            gprec(open-1,closed,curr+mapping[0],S,mapping,n);
        }
        else if(open == 0)
            gprec(open,closed-1,curr+mapping[1],S,mapping,n);
    }
};
