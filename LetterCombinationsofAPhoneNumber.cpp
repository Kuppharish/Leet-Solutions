class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> S;
        vector<string> M;
        M = {"0","1","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        if(digits.size()==0){
            return S;
        }
        letterCombinationsRecursive("", 0, digits, S, M);
        return S;
    }
    void letterCombinationsRecursive(string curr, int index, string &digits, vector<string> &S, vector<string> &M){
        if(index == digits.size()){
            S.push_back(curr);
            return;}
        string letters = M[digits[index]-'0'];
        for(int i = 0;i<letters.size();i++){
            letterCombinationsRecursive(curr+letters[i],index+1,digits,S,M);
        }
    }
};
