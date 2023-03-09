/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
      ListNode * slow = head, *fast = head;
    while (fast && fast->next) {
		fast = fast->next->next;
		slow = slow->next;
		if (fast == slow) {
			 ListNode* first = head;
			while (first != slow) {
				first = first->next;
				slow = slow->next;
			}
			return slow;
		}
	}
	return NULL;
    }
};