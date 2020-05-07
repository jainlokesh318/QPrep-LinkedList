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
      if(head1 == NULL || head2 == NULL)
        return NULL;
     ListNode* temp1 = head1, *temp2 = head2;

    while(temp1->next != NULL)
        temp1 = temp1->next;
    while(temp2->next != NULL)
        temp2 = temp2->next;

    if(temp1 != temp2){
        return NULL;
    }

    temp1 = head1, temp2 = head2;
    int first_cnt = 0, sec_cnt = 0;
   while(temp1 != temp2)
    {
        if(temp1 == NULL)
        {
            if(first_cnt%2 == 0)
                temp1 = head2;
            else
                temp1 = head1;
            first_cnt++;
            continue;
        }

        if(temp2 == NULL)
        {
            if(sec_cnt%2 == 0)
                temp2 = head1;
            else
                temp2 = head2;
            sec_cnt++;
            continue;
        }

        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    return temp1;
}
