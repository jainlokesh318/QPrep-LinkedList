from Solution import *
from crio.ds.List.ListNode import *


def print_list(head):
    while head != None:
        print(head.val, end = " ")
        head = head.next

def main():
   n = int(input().strip())
   lst = [int(x) for x in input().strip().split()]
   lst = createList(lst)
   print_list(sort_list(lst))

if __name__ == '__main__':
    main()
