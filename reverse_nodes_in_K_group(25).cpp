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
    ListNode* reverseKGroup(ListNode* head, int k) {
        // adding this case because we don't need to reverse if the remaining linked list 
        // to be reverersed is less than k
        int size = 0;
        ListNode *temp = head;
        while(temp!=NULL){
            temp = temp -> next;
            size++;
        }
        if(size < k)
            return head; 

        // base case
        if(head==NULL){
            return NULL;
        }
        // step 1 : reverse first k nodes
        ListNode *prev = NULL;
        ListNode *curr = head;
        ListNode *forward = NULL;
        int count =0;
        while(curr !=NULL && count<k){
            forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr=forward;
            count++;
        }
        // recursion dekh lega
        if(forward!= NULL){
            head->next = reverseKGroup(forward,k);
        }
        // return head of reversed linked list 
        return prev;

    }
};