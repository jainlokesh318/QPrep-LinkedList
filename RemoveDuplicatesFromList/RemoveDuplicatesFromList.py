from Solution import *
from crio.ds.List.ListNode import *


def print_list(head):
    while head != None:
        print(head.val, end = " ")
        head = head.next

def main():
   n = int(input().strip())
   lst = None 
   if n > 0:
       lst = input().strip().split()
       lst = [int(x) for x in lst]
       lst = createList(lst)
   
   print_list(remove_duplicates(lst))

if __name__ == '__main__':
    main()
