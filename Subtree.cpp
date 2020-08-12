/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isSubtree(TreeNode* s, TreeNode* t) {
        stack<TreeNode*> q_s;
        stack<TreeNode*> q_t;
        string S, T;
        q_s.push(s);
        q_t.push(t);
        while(!q_s.empty()){
            TreeNode* cur = q_s.top();
            S+=('#'+to_string(cur->val));
            if(cur->left==NULL) S+="lnull";
            if(cur->right==NULL) S+="rnull";
            q_s.pop();
            if(cur->right) q_s.push(cur->right);
            if(cur->left) q_s.push(cur->left);
        }
        while(!q_t.empty()){
            TreeNode* cur = q_t.top();
            T+=('#'+to_string(cur->val));
            if(cur->left==NULL) T+="lnull";
            if(cur->right==NULL) T+="rnull";
            q_t.pop();
            if(cur->right) q_t.push(cur->right);
            if(cur->left) q_t.push(cur->left);
        }
        cout<<S<<endl<<T;
        return kmp(S,T)>=0;
    }
    int kmp(const string &T, const string &P) {
      if (P.empty()) return 0;

      vector<int> pi(P.size(), 0);
      for (int i = 1, k = 0; i < P.size(); ++i) {
        while (k && P[k] != P[i]) k = pi[k - 1];
        if (P[k] == P[i]) ++k;
        pi[i] = k;
      }

      for (int i = 0, k = 0; i < T.size(); ++i) {
        while (k && P[k] != T[i]) k = pi[k - 1];
        if (P[k] == T[i]) ++k;
        if (k == P.size()) return i - k + 1;
      }

      return -1;
    }
};
