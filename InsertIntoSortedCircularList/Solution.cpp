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

ListNode* insertIntoSortedCircularList(ListNode* head, int insertVal)
{

    if(head == NULL)
    {
        ListNode *newNode = new ListNode();
        newNode->val = insertVal;
        newNode->next = newNode;

        return newNode;
    }

    ListNode *toReturn = head, *temp = head->next;

    while(!((insertVal >= head->val) && (insertVal <= temp->val)) && temp != toReturn)
    {
       // cout << head->val << " " << temp->val << "\n";

        if(head->val > temp->val)
            break;

        head = temp;
        temp = temp->next;
    }

    ListNode *newNode = new ListNode();
        newNode->val = insertVal;
        newNode->next = temp;
        head->next = newNode;

    return toReturn;
}
