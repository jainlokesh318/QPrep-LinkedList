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
    ListNode* head = ListNode().createList(list);
    bool result = isPalindrome(head);

    cout << (result ? "Yes\n": "No\n");

    return 0;
}
