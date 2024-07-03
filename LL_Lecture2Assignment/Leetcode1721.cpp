// 1721. Swapping Nodes in a Linked List
// Medium
// Topics
// Companies
// Hint
// You are given the head of a linked list, and an integer k.
// Return the head of the linked list after swapping the values of the kth node from the beginning and the kth node from the end (the list is 1-indexed).
// Example 1:
// Input: head = [1,2,3,4,5], k = 2
// Output: [1,4,3,2,5]
// Example 2:
// Input: head = [7,9,6,6,7,8,3,0,9,5], k = 5
// Output: [7,9,6,6,8,7,3,0,9,5]
// Constraints:
// The number of nodes in the list is n.
// 1 <= k <= n <= 10^5
// 0 <= Node.val <= 100
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
//Approach 1: Using Linked List
class Solution
{
public:
    ListNode *swapNodes(ListNode *head, int k)
    {
        ListNode *dummy = new ListNode(0);
        dummy->next = head;
        ListNode *slow = dummy;
        ListNode *fast = dummy;

        // Move fast pointer to the k-th node from the beginning
        for (int i = 0; i < k; ++i)
        {
            fast = fast->next;
        }

        ListNode *first = fast;

        // Move both pointers until fast reaches the end
        while (fast != nullptr)
        {
            slow = slow->next;
            fast = fast->next;
        }

        ListNode *second = slow;

        // Swap values of the nodes
        int temp = first->val;
        first->val = second->val;
        second->val = temp;

        return dummy->next;
    }
};
//Approach 2: Storing all elements of Linked list in array and then swapping the values
