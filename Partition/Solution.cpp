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

ListNode* partition(ListNode* head, int x)
{
    ListNode* temp = head, *prev = NULL;
    ListNode* newNode = new ListNode();
    ListNode* toSend = newNode;
 //---------------------------------------------------------------------------------
    while(temp != NULL)
    {
        if(temp->val < x)
        {
            if(prev == NULL)
            {
                head = temp->next;
                temp->next = NULL;

                newNode->next = temp;
                newNode = newNode->next;

                temp = head;
            }

            else
            {
                prev->next = temp->next;
                temp->next = NULL;

                newNode->next = temp;
                newNode = newNode->next;

                temp = prev->next;
            }
        }

        else
        {
            prev = temp;
            temp = temp->next;
        }
    }
//-------------------------------------------------------------------------------------
    temp = head;
    prev = NULL;

    while(temp != NULL)
    {
        if(temp->val == x)
        {
            if(prev == NULL)
            {
                head = temp->next;
                temp->next = NULL;

                newNode->next = temp;
                newNode = newNode->next;

                temp = head;
            }

            else
            {
                prev->next = temp->next;
                temp->next = NULL;

                newNode->next = temp;
                newNode = newNode->next;

                temp = prev->next;
            }
        }

        else
        {
            prev = temp;
            temp = temp->next;
        }
    }

//-------------------------------------------------------------------------------------
    temp = head;
    prev = NULL;
    while(temp != NULL)
    {
        if(temp->val > x)
        {
            if(prev == NULL)
            {
                head = temp->next;
                temp->next = NULL;

                newNode->next = temp;
                newNode = newNode->next;

                temp = head;
            }

            else
            {
                prev->next = temp->next;
                temp->next = NULL;

                newNode->next = temp;
                newNode = newNode->next;

                temp = prev->next;
            }
        }

        else
        {
            prev = temp;
            temp = temp->next;
        }
    }
//-----------------------------------------------------------------------------------
    return toSend->next;
}