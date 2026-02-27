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
        ListNode* newHead = NULL;
        ListNode* curr = NULL;

        while(list1 != NULL && list2 != NULL) {
            int value = 0;
            if(list1->val <= list2->val) {
                value = list1->val;
                list1 = list1->next;
            }else{
                value = list2->val;
                list2 = list2->next;
            }

            ListNode* tempNode = new ListNode(value); // create new node with the current minimum

            if(newHead == NULL) {
                newHead = tempNode;
                curr = tempNode;
            }else{
                curr->next = tempNode;
                curr = curr->next;
            }
        }

        while(list1 != NULL) {
            ListNode* tempNode = new ListNode(list1->val);
            if(newHead == NULL) {
                newHead = tempNode;
                curr = tempNode;
            }else{
                curr->next = tempNode;
                curr = curr->next;
            }
            list1 = list1->next;
        }

        while(list2 != NULL) {
            ListNode* tempNode = new ListNode(list2->val);
            if(newHead == NULL) {
                newHead = tempNode;
                curr = tempNode;
            }else{
                curr->next = tempNode;
                curr = curr->next;
            }
            list2 = list2->next;
        }

        return newHead;
    }
};
