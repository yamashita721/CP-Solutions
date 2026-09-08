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
        if(head==nullptr || k==1){
            return head;
        }
        ListNode* ptr=head;
        int count=0;
        while(ptr){
            count++;
            ptr=ptr->next;
        }
        ListNode dummy(0);
        dummy.next=head;
        ListNode* prev= &dummy;
        ListNode* curr=head;
        while(count>=k){

            for (int i = 1; i < k; ++i) {
                ListNode* temp = curr->next;
                curr->next = temp->next;
                temp->next = prev->next;
                prev->next = temp;
            }
            prev=curr;
            curr=curr->next;
            count-=k;
        }
        return dummy.next;
    }
};