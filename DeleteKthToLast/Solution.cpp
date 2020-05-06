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
ListNode* deleteKthToLast(ListNode* head , int k) {
    ListNode* temp = head;

    int cnt = 0;
    while(temp != NULL)
    {
        cnt++;
        temp = temp->next;
    }

    if(cnt == k)
        return head->next;
    else
    {
        k = cnt-k;
        temp = head;
        ListNode * prev = NULL;
        while(k--)
        {
            prev = temp;
            temp = temp->next;
        }

        temp = temp->next;
        prev->next = temp;
        return head;
    }
}
