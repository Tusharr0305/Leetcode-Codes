// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
// public:
//     vector<int> nodesBetweenCriticalPoints(ListNode* head) {
//         int mini=INT_MAX,maxi=INT_MIN;
        
//         ListNode* prev=head,*curr=head->next,*nexi=NULL;
        
//         if(!curr)
//             nexi=curr->next;
        
//         while(!nexi->next){
            
//             if(prev->val>curr->val<nexi->val&&curr->val<mini){
//                 mini=curr->val;
//             }
//             if(prev->val<curr->val>nexi->val&&curr->val>maxi){
//                 maxi=curr->val;
//             }
//             prev=curr;
//             curr=nexi;
//             nexi=nexi->next;
//         }
//         return {mini,maxi};
//     }
// };
class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) 
    {
        vector<int>store;

        int ans1 = INT_MAX, cur, next, n;
        int last = head->val, position = 2;

        while(head->next)
        {
            cur = head->val, next = head->next->val;

            if((last > cur and cur < next) or (last < cur and cur > next)) 
                store.push_back(position);
            position++;
            last = cur, head = head->next;

            n = store.size();
            if(n > 1) ans1 = min(ans1, store[n-1] - store[n-2]);
        }
        
        if(ans1 == INT_MAX) return {-1, -1};
        
        return {ans1, store.back() - store[0]};
    }
};