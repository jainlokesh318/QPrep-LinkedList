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

ListNode* mergeTwoLists(ListNode* head1, ListNode* head2) {
     ListNode* head;

//to handle the edge cases of null lists and thus initialize the head of the new list
//makes head of the new list that node which is smaller out of both the lists
    if(head1 == NULL && head2 == NULL)
        return NULL;
    else if(head1 == NULL && head2 != NULL){
        head = head2;
        head2 = head2->next;
    }
    else if(head1 != NULL && head2 == NULL){
        head = head1;
        head1 = head1->next;
    }
    else if(head1 != NULL && head2 != NULL)
    {
        if(head1->val < head2->val)
        {
            head = head1;
            head1 = head1->next;
        }
        else{
            head = head2;
            head2 = head2->next;
        }
    }


//Merge both the lists in increasing order
    ListNode* curr = head;

    while(head1 != NULL && head2 != NULL)
    {
        if(head1->val > head2->val)
        {
            curr->next = head2;
            curr = head2;
            head2 = head2->next;
        }

        else
        {
            curr->next = head1;
            curr = head1;
            head1 = head1->next;
        }
    }

//if any of the two list left unmerged then include it in the new list
    while(head1 != NULL)
    {
        curr->next = head1;
        curr = head1;
        head1 = head1->next;
    }

    while(head2 != NULL)
    {
        curr->next = head2;
        curr = head2;
        head2 = head2->next;
    }

    return head;
}

