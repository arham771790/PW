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
//Approach : Make a Stack of type LinkedList then push all elements of Linked List inside the stack so the Linked List elements will now be present in reverse order ie the top element of stack would now be pointing to the last node of the Linked List 
// Now check if the st.top is greater than max value then only it would be included in the Linked List else it would be just popped out
class Solution {
public:
    ListNode* removeNodes(ListNode* head) {
        stack <ListNode*> st;
        while(head)
        {
            st.push(head);
            head=head->next;
        }
        ListNode* tail=st.top();
        st.pop();
        int mx=tail->val;
        while(st.size()>0)
        {
            ListNode* top=st.top();
            st.pop();
            if(top->val >= mx)
            {
                top->next=tail;
                tail=top;
                mx=top->val;
            }
        }
        // Here the important observation is that tail is the new head of the output Linked List
        return tail;
    }
};