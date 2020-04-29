#include<bits/stdc++.h>
using namespace std;
#include "Solution.cpp"
#include "../crio/cpp/io/FastIO.hpp"


int main() {


	FastIO();
	int n, k;
	cin >> n;
	vector<int> list(n);
	for ( int i = 0; i < n; i++)
		cin >> list[i];

	cin >> k;
	ListNode * head = ListNode().createList(list);

	head = rotateList(head, k);
	vector<int> resultList = ListNode().extractList(head);
	for ( int it : resultList) {
		cout << it << " ";
	}
}
