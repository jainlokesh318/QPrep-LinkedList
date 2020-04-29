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
    int k;
    cin >> k;

    ListNode* head = ListNode().createList(list);
    ListNode* result = deleteKthToLast(head, k);
    vector<int> resultList = ListNode().extractList(result);
    for(int i = 0 ; i < resultList.size() ; ++i) {
        cout << resultList[i] << " ";
    }
    cout << "\n";
    return 0;
}
