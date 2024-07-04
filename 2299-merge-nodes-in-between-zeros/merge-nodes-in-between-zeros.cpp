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
    
    int getSum(ListNode* &head){
        int sum=0;
        while(head!=NULL&&head->val!=0){
            sum+=head->val;
            head=head->next;
        }
        return sum;
    }
    
    ListNode* mergeNodes(ListNode* head) {
        ListNode* ans=new ListNode(0);
        ListNode* temp=ans;
        while(head!=NULL){
            if(head->val==0&&head->next){
                int sum=getSum(head->next);
                ans->next=new ListNode(sum);
                ans=ans->next;
            }
            // cout<<head->val;
            head=head->next;
        }
        return temp->next;
    }
};