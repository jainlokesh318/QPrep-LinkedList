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
ListNode* reverseEvenSublist(ListNode* prev, ListNode* curr)
{

    ListNode* nextNode; //to keep track of the next node to current
    ListNode* initial = curr; //Since this node will be tail after reversal which is to be pointed to the next sublist.
    while(curr != NULL && curr->val%2 == 0)
    {
        nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }

    initial->next = curr;
    return prev;
}

ListNode * reverseEvenElements(ListNode *head , ListNode *prev) {
    if(head == NULL)
        return NULL;
    ListNode *curr = head;

    while(curr != NULL)
    {
        if((curr->val)%2 != 0 || curr->next == NULL || (curr->next->val)%2 == 1)
        {
            prev = curr;
            curr = curr->next;
        }

        else
        {
            if(curr == head)
                head = reverseEvenSublist(prev, curr);
            else
            {
               ListNode* OldPrev = prev;
               OldPrev->next = reverseEvenSublist(prev, curr);
            }
        }
    }
    return head;
}
