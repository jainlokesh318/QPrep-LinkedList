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
ListNode* listIntersectionPoint(ListNode* head1, ListNode* head2) {
     set<ListNode*> visited;

    while(head1 != NULL)
    {
        visited.insert(head1);
        head1 = head1->next;
    }

    while(head2 != NULL)
    {
        if(visited.find(head2) != visited.end())
            return head2;
        head2 = head2->next;
    }
    return NULL;
}
