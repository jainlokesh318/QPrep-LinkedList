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

stack<int> getNumber(ListNode* head)
{
    stack<int> num;

    while(head != NULL)
    {
        num.push(head->val);
        head = head->next;
    }
    return num;
}

//to add the numbers from the stack and get the result as a linked list
ListNode* addNumbers(stack<int> num1, stack<int> num2)
{
    //Node to get the starting at end
    ListNode* res = new ListNode();
    ListNode* prev = res;
    res = prev;

    //add until the smaller stack gets exhusted
    int carry = 0;
    while(!num1.empty() && !num2.empty())
    {
        int a = num1.top();
        num1.pop();
        int b = num2.top();
        num2.pop();

        int ans = carry + a + b;
        carry = ans/10;
        int curr_ans = ans%10;

        ListNode* newNode = new ListNode(curr_ans);
        prev->next = newNode;
        prev = newNode;
    }

    //add if first stack is yet not exhausted
    while(!num1.empty())
    {
        int a = num1.top();
        num1.pop();

        int ans =  carry + a;
        carry = ans/10;
        int curr_ans = ans%10;

        ListNode* newNode = new ListNode(curr_ans);
        prev->next = newNode;
        prev = newNode;
    }

    //add if second stack is yet not exhausted
    while(!num2.empty())
    {
        int a = num2.top();
        num2.pop();

        int ans =  carry + a;
        carry = ans/10;
        int curr_ans = ans%10;

        ListNode* newNode = new ListNode(curr_ans);
        prev->next = newNode;
        prev = newNode;
    }

    //if carry is yet there then add a new node for it
    if(carry != 0)
    {
        ListNode* newNode = new ListNode(carry);
        prev->next = newNode;
        prev = newNode;
    }
    return res->next;
}

//to reverse the list
ListNode* reverseList(ListNode* curr)
{
    ListNode* prev = NULL, *next = NULL;

    while(curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    return prev;
}

ListNode* sumLists2(ListNode* l1, ListNode* l2)
{
    stack<int> num1 = getNumber(l1);
    stack<int> num2 = getNumber(l2);

    ListNode* res = addNumbers(num1, num2);
    return reverseList(res);
}