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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int> v;
        ListNode* temp=list1;
        ListNode* temp2=list2;
        while(temp!=nullptr){
            v.push_back(temp->val);
            temp=temp->next;
        }
        while(temp2!=nullptr){
            v.push_back(temp2->val);
            temp2=temp2->next;
        }
        if(v.size()==0){
            return nullptr;
        }
        sort(v.begin(),v.end());
        ListNode* dummy= new ListNode(v[0]);
        ListNode* curr=dummy;

        for(int i=1;i<v.size();i++){
        ListNode* soup=new ListNode(v[i]);
        curr->next=soup;
        curr=soup;
        }
        return dummy;
    }
};