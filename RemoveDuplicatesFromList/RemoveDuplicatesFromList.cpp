#include <bits/stdc++.h>
#include "Solution.cpp"

using namespace std;


int main() {
    int n;
    cin >> n;
    vector<int> list(n);
    for(int i = 0 ; i < n ; ++i) {
        cin >> list[i];
        if(i > 0) {
            assert(list[i] >= list[i-1]);
        }
    }
    ListNode* head = ListNode().createList(list);

    ListNode* result = removeDuplicatesFromList(head);
    vector<int> resultList = ListNode().extractList(result);
    
    for(int i = 0 ; i < resultList.size() ; ++i) {
        cout << resultList[i] << " ";
    }
    cout << "\n";
    return 0;
}
