#include<bits/stdc++.h>
using namespace std;
#include "Solution.cpp"


int main() {
    int n;
    cin >> n;
    vector<int> list(n);
    for(int i = 0 ; i < n ; ++i) {
        cin >> list[i];
    }
    ListNode* head1 = ListNode().createList(list);

    int m;
    cin >> m;
    vector<int> list2(m);
    for(int i = 0 ; i < m ; ++i) {
        cin >> list2[i];
    }
    assert(list[0] != 0 && list2[0] != 0);
    ListNode* head2 = ListNode().createList(list2);

    ListNode* result = sumLists2(head1 , head2);

    vector<int> resultList = ListNode().extractList(result);
    for(int i = 0 ; i < resultList.size() ; ++i) {
        cout << resultList[i] << " ";
    }
    cout << "\n";
    return 0;
}
