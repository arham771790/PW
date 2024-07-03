// 203. Remove Linked List Elements
// Solved
// Easy
// Topics
// Companies
// Given the head of a linked list and an integer val, remove all the nodes of the linked list that has Node.val == val, and return the new head.
// Example 1:
// Input: head = [1,2,6,3,4,5,6], val = 6
// Output: [1,2,3,4,5]
// Example 2:
// Input: head = [], val = 1
// Output: []
// Example 3:
// Input: head = [7,7,7,7], val = 7
// Output: []
// Constraints:
// The number of nodes in the list is in the range [0, 104].
// 1 <= Node.val <= 50
// 0 <= val <= 50
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
class Solution
{
public:
    ListNode *removeElements(ListNode *head, int val)
    {
        //This checks if same val is repeated again and again the current pointer will also be shifted next to next
        ListNode *curr = head;
        while (curr && curr->val == val)
        {
            curr = curr->next;
        }
        //Since last all values had to be deleted so now head points to current node
        head = curr;
        //In this while condition checks if Current is not null
        while (curr)
        {
            //If current ka next is not NUll and value is equal to val
            //then current ka next becomes current ke next ka next
            if (curr->next && curr->next->val == val)
            {
                curr->next = curr->next->next;
            }
            //Warna current is current ka next
            else
            {
                curr = curr->next;
            }
        }
        //head is returned 
        return head;
    }
};
