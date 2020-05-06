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

ListNode * moveMiddleToHead(ListNode * head) {
    if(head == NULL || head->next == NULL)
        return head;

    ListNode* temp = head;

    int cnt = 0;
    while(temp != NULL)
    {
        cnt++;
        temp = temp->next;
    }


    int k = (cnt/2);
    temp = head;
    ListNode * prev = NULL;
    while(k--)
    {
        prev = temp;
        temp = temp->next;
    }

    prev->next = temp->next;
    temp->next = head;
    head = temp;
    return head;
}
