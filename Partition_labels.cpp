class Solution {
public:
    vector<int> partitionLabels(string S) {
        vector<int> res;
        int st = 0,en=-1;
        char last = S[0];
        for(int i=0;i<S.size();++i){
            if(S.find_last_of(S[i])==i){
                if(S[i]==last){res.push_back(i-st+1);
                               st=i+1;
                               last = S[st];
                              }
            }
            else{
                int pos = S.find_last_of(S[i]);
                 if(pos>en){                
                        en = S.find_last_of(S[i]);
                        last = S[i];
                 }
            }
        }
        return res;
    }
};
