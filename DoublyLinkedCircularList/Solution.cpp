#include "../crio/cpp/ds/ListNode/ListNode.hpp"
#include "DoublyLinkedListNode.cpp"

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

// Definition for DoublyLinkedListNode
class DoublyLinkedListNode {
public:
    int val;
    DoublyLinkedListNode *prev;
    DoublyLinkedListNode *next;

    DoublyLinkedListNode(int x, DoublyLinkedListNode* p=NULL, DoublyLinkedListNode* n=NULL) {
        val = x;
        prev = p;
        next = n;
    }
};
*/

DoublyLinkedListNode* doublyLinkedCircularList(ListNode* head) {
     if(head == NULL)
        return NULL;

    ListNode* temp = head->next;
    DoublyLinkedListNode* cirHead = new DoublyLinkedListNode(head->val, NULL, NULL);
    DoublyLinkedListNode* last = cirHead;

    while(temp != NULL)
    {

        DoublyLinkedListNode* newNode = new DoublyLinkedListNode(temp->val, last, NULL);
        last->next = newNode;
        last = last->next;
        temp = temp->next;
    }

    last->next = cirHead;
    cirHead->prev = last;

    return cirHead;
}
