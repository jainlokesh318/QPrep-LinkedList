
class DoublyLinkedListNode {
public:
    int val;
    DoublyLinkedListNode *prev;
    DoublyLinkedListNode *next;

    DoublyLinkedListNode(int x, DoublyLinkedListNode* p=NULL, DoublyLinkedListNode* n=NULL) {
        val = x;
        prev = p;
        next = n;
    }
};