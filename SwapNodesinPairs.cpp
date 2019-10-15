/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL||head->next==NULL)
            return head;
        ListNode* p = head;
        ListNode* q = NULL;
        ListNode* ns = p->next;
        while(1){
            q = p->next;
            ListNode* temp = q->next;
            q->next = p;
            if(temp==NULL){
                p->next=NULL;
                break;}
            else if(temp->next==NULL){
                p->next=temp;
                break;
            }
            p->next = temp->next;
            p = temp;
        }
        return ns;
    }
};
