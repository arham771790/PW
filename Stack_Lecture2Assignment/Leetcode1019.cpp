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
//This calculates length of LL and is accessed globally 
int len=0;
   ListNode* ReverseLL(ListNode *head)
   {
    ListNode *prev=NULL;
    ListNode *curr=head;
    ListNode *nextt=NULL;
    while(curr)
    {
        len++;
        nextt=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nextt;
    }
    return prev;
   }
    vector<int> nextLargerNodes(ListNode* head) {
        head=ReverseLL(head);
        ListNode *temp=head;
        stack <int> st;
        vector <int> ans(len,0);
        int i=0;
        while(head)
        {
            while(st.size()>0 && st.top() <=head->val)
            {
                st.pop();
            }
            if(!st.empty())
            ans[i]=st.top();
            st.push(head->val);
            head=head->next;
            i++;
        }
        reverse(ans.begin(),ans.end());
         return ans;    
    }
};