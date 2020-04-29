from Solution import *
from crio.ds.List.ListNode import *

def print_list(head):
    while head != None:
        print(head.val, end = " ")
        head = head.next

def get_nth_node(head, n):
    for i in range(n):
        head = head.next

    return head 

def main():
   n = int(input().strip())
   lst = input().strip().split()
   lst = [int(x) for x in lst]
   k = int(input().strip()) 
   lst = createList(lst)
   assert(k > 1 and k < n)
   
   res_lst = delete_middle_node(lst, get_nth_node(lst, k-1))
   print_list(res_lst)

if __name__ == '__main__':
    main()


