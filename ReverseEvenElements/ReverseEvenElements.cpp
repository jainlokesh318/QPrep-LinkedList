#include<bits/stdc++.h>
using namespace std;
#include "Solution.cpp"
#include "../crio/cpp/io/FastIO.hpp"


int main() {
	FastIO();
	int n;
	cin >> n;
	vector<int> list(n);
	for ( int i = 0; i < n; i++) cin >> list[i];
	ListNode *head = ListNode().createList(list);
	head = reverseEvenElements(head, NULL);
	vector<int> result = ListNode().extractList(head);
	for ( int it : result) {
		cout << it << " ";
	}
}
