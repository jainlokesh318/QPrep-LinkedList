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

    ListNode * rotateList(ListNode * head , int k) 
    {
         if(head == NULL)
            return head;
    
        ListNode* temp = head;
        int cnt = 0;

        while(temp != NULL)
        {
            cnt++;
            temp = temp->next;
        }

        if(k%cnt == 0)
            return head;
        
        k = k%cnt;
        k = cnt-k-1;

        temp = head;
        while(k--)
            temp = temp->next;

        ListNode* newHead = temp->next;
        temp->next = NULL;
    
        temp = newHead;
        while(temp->next != NULL)
            temp = temp->next;
        
        temp->next = head;

        return newHead;
    }
