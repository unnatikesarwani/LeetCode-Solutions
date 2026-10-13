/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNodes(ListNode* head) {
        if(head == NULL){
            return head;
        }
        head = reverse(head);
        int max_val = head->val;
        ListNode* current = head;
        while(current->next != NULL){
            if(current->next->val < max_val){
                current->next = current->next->next;
            }
            else{
                max_val = current->next->val;
                current = current->next;
            }
        }
        return reverse(head);
    }
    ListNode* reverse(ListNode* head){
        ListNode* prev = NULL;
        ListNode* current = head;
        while(current != NULL){
            ListNode* nextnode = current->next;
            current->next =  prev;
            prev = current;
            current = nextnode;
        }
        return prev;
    }
};