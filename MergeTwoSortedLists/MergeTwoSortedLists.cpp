#include <bits/stdc++.h>
#include "FastIO.hpp"
#include "ReadMatrix.hpp"
#include "PrintMatrix.hpp"
#include "ListNode.hpp"
using namespace std;

class MergeTwoSortedLists {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* res = new ListNode(0);
        ListNode* temp = res;
        return temp->next;
    }
};

int main() {
	FastIO();
	int m, n;
	cin >> m;
	vector<int> nums1, nums2;
	ReadMatrix<int>().OneDMatrix(m, nums1);
    cin >> n;
	ReadMatrix<int>().OneDMatrix(n, nums2);
	ListNode* l1 = ListNode().createList(nums1);
    ListNode* l2 = ListNode().createList(nums2);

    ListNode* resultHead = MergeTwoSortedLists().mergeTwoLists(l1, l2);
    vector<int> result = ListNode().extractList(resultHead);
    PrintMatrix<int>().OneDMatrix(result, " ");
	return 0;
}
