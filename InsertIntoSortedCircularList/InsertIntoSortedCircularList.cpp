#include<bits/stdc++.h>
using namespace std;
#include "Solution.cpp"

void createCircularList(ListNode* head)
{
	if (head == NULL)
		return ;
	if (head->next == NULL)
	{
		head->next = head;
		return ;
	}
	ListNode* node = head;
	while (node->next != NULL)
	{
		node = node->next;
	}
	node->next = head;
	return ;
}
void printCircularList(ListNode* head)
{
	if (head == NULL)
		return;
	else if (head->next == head)
		cout << head->val;
	else
	{
		cout << head->val << " ";

		ListNode* node = head->next;
		while (node != head)
		{
			cout << node->val << " ";
			node = node->next;
		}
	}
}

int main() {
	int n;
	cin >> n;
	vector<int> list(n);
	for ( int i = 0; i < n; i++) cin >> list[i];

	int x;
	cin >> x;
	ListNode *head = ListNode().createList(list);
	createCircularList(head);
	head =  insertIntoSortedCircularList(head, x);
	printCircularList(head);
}
