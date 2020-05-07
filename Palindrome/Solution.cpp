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
bool checkPallindrome(vector<int> v)
{
    int i = 0, j = v.size()-1;
    while(i <= j)
    {
        if(v[i] != v[j])
            return false;
        i++;
        j--;
    }
    return true;
}
bool isPalindrome(ListNode* head) {
    if(head == NULL)
        return false;
    ListNode* temp = head;

   vector<int> v;
    while(temp != NULL)
    {
        v.push_back(temp->val);
        temp = temp->next;
    }

    return checkPallindrome(v);
}
