// 25. Reverse Nodes in k-Group
// Solved
// Hard
// Topics
// Companies
// Given the head of a linked list, reverse the nodes of the list k at a time, and return the modified list.
// k is a positive integer and is less than or equal to the length of the linked list. If the number of nodes is not a multiple of k then left-out nodes, in the end, should remain as it is.
// You may not alter the values in the list's nodes, only nodes themselves may be changed.
// Example 1:
// Input: head = [1,2,3,4,5], k = 2
// Output: [2,1,4,3,5]
// Example 2:
// Input: head = [1,2,3,4,5], k = 3
// Output: [3,2,1,4,5]
// Constraints:
// The number of nodes in the list is n.
// 1 <= k <= n <= 5000
// 0 <= Node.val <= 1000 
// Follow-up: Can you solve the problem in O(1) extra memory space?
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
    // To reverse the Linked List
    ListNode* reverseLL(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* nextt = NULL;
        while (curr != NULL) {
            nextt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextt;
        }
        return prev;
    }
    // This function will get the kth Node from temp
    ListNode* getAtNode(ListNode* head, int index) {

        ListNode* current = head;

        // the index of the
        // node we're currently
        // looking at
        int count = 0;
        while (current != NULL) {
            if (count == index - 1)
                break;

            count++;
            current = current->next;
        }
        return current;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {

        ListNode* temp = head;
        ListNode* prevNode = NULL;
        ListNode* nexNode = NULL;
        while (temp != NULL) {
            // This gets the kthNode from temp
            ListNode* kthNode = getAtNode(temp, k);
            // This occurs if kthNode is NULL that means there are no more nodes
            // greater than k or nodes left are
            //  less than k so we have to skip them from getting reversed
            if (kthNode == NULL) {
                // This checks if prev is not NULL then its next should be temp
                if (prevNode)
                    prevNode->next = temp;
                // after making prevNode next as temp we break the loop and skip
                // remaining nodes that are less than k
                break;
            }
            // If kthNode is Not NULL than below statements will execute
            // nexNode will be kthNodes next node as we have to preserve a
            // checkmark so that nodes get lost after unlinking
            nexNode = kthNode->next;
            // Now kthNode connection is broken so that we can reverse k no. of
            // nodes
            kthNode->next = NULL;
            // Nodes are reverse from temp to k
            reverseLL(temp);
            // this if condition occurs one first half ie when after reversing
            // temp comes at last and KthNode comes at first
            //  so if temp comes at last after reversing then head will also
            //  come at last so updating head to Kthnode is mandatory for not to
            //  lose the head
            if (temp == head) {
                head = kthNode;
            } // If this is not the first iteraion/cycle then prevNode next
              // should be kthNode
            else {
                prevNode->next = kthNode;
            }
            // updating prevNode again to temp and temp will be the NextNode
            prevNode = temp;
            temp = nexNode;
        }
        return head;
    }
};