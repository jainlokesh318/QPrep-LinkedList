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

void deleteMiddleNode(ListNode* node) {
    ListNode *newNode = node->next;
    node->val = newNode->val;
    node->next = newNode->next;
}
