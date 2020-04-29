from Solution import *
from crio.ds.List.ListNode import *


def print_list(head):
    while head != None:
        print(head.val, end = " ")
        head = head.next

def main():
   n = int(input().strip())
   lst = input().strip().split()
   lst = [int(x) for x in lst]
   k = int(input().strip()) 
   lst = createList(lst)
   
   one_lst = delete_kth_to_last(lst, k)

   print_list(one_lst)

if __name__ == '__main__':
    main()


