#include "../crio/cpp/ds/ListNode/ListNode.hpp"
/**
 * Definition for singly-linked list.
 * class ListNode {
 *   int val;
 *   ListNode* next;
 *   ListNode(int x) { val = x, next(NULL)}
 * }
 */

class SortList {
  public:
    ListNode* getMiddleNode(ListNode* head)
{
    if(head == NULL)
        return head;

    ListNode* slow = head, *fast = head;

    while(slow->next != NULL && fast->next->next != NULL)
    {
        slow = slow->next;
        fast = fast->next;
    }
    return slow;
}

ListNode* mergeLists(ListNode* left, ListNode* right)
{
    ListNode* temp = new ListNode();
    ListNode* prev = temp;

    while(left != NULL && right != NULL)
    {
        if(left->val <= right->val)
        {
            prev->next = left;
            left = left->next;
        }
        else
        {
            prev->next = right;
            right = right->next;
        }
        prev = prev->next;
    }

    if(left == NULL)
        prev->next = right;
    else
        prev->next = left;

    return temp->next;
}

ListNode* sortList(ListNode* head)
{
    if(head == NULL ||  head->next == NULL)
        return head;

    ListNode* middle = getMiddleNode(head);
    ListNode* middle_plus_one = middle->next;
    middle->next = NULL;

    ListNode* leftList = sortList(head);
    ListNode* rightList = sortList(middle_plus_one);

    return mergeLists(leftList, rightList);
}
};


