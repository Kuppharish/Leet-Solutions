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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        if(head==NULL)
            return NULL;
        for(int i = 0;i<n;i++){
            if(temp->next == NULL){
                if(i==n-1){
                    head = head->next;
                    return head;}
                else 
                    return temp->next;
            }
            temp = temp->next;
        }
        ListNode* temp1 = head;
        while(temp->next!=NULL){
            temp = temp->next;
            temp1 = temp1-> next;
        }
        //cout<<temp1->val;
        temp1->next=temp1->next->next;
        return head;
    }
};
