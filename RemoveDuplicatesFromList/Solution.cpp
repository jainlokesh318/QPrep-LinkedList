#include "../crio/cpp/ds/ListNode/ListNode.hpp"

/*
// Definition for ListNode
class ListNode {
public:
    int val;
    ListNode* next;
    ListNode() {}
    ListNode(int x) {
        val = x;
        next = NULL;
    }
};
*/
ListNode* removeDuplicatesFromList(ListNode* head)
{
     if(head == NULL || head->next == NULL)
        return head;


    ListNode *rep = new ListNode();
    rep->next = head;
    ListNode *prev = rep, *curr = head;

    while(curr != NULL)
    {
        while(curr->next != NULL && (prev->next->val == curr->next->val))
            curr = curr->next;

        if(prev->next == curr)
            prev = prev->next;
        else
            prev->next = curr->next;

        curr = curr->next;
    }

    head = rep->next;
    return head;

}
