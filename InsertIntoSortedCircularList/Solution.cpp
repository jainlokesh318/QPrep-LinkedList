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

ListNode* find_head(ListNode* random)
{
    if(random == NULL)
        return NULL;

    ListNode *var = random;
    while(!(var->val > var->next->val || var->next == random))
        var = var->next;

    return var->next;
}

ListNode* insertIntoSortedCircularList(ListNode* head, int insertVal)
{
    ListNode *toReturn = head;

    head = find_head(head);

    ListNode *newNode = new ListNode();
    newNode->val = insertVal;
    newNode->next = NULL;

    ListNode *current = head;
    if(current == NULL)
    {
        newNode->next = newNode;
        return newNode;
    }

    else if(current->val >= insertVal)
    {
        while(current->next != head)
            current = current->next;
        current->next = newNode;
        newNode->next = head;
    }

    else{
        while(current->next != head && current->next->val < newNode->val)
            current = current->next;

        newNode->next = current->next;
        current->next = newNode;
    }

    return toReturn;
}

/*ListNode* insertIntoSortedCircularList(ListNode* head, int insertVal)
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
}*/
