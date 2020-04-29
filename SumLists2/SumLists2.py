from Solution import *
from crio.ds.List.ListNode import *


def print_list(head):
    while head != None:
        print(head.val, end = " ")
        head = head.next


def read_one_list():
   n = int(input().strip())
   lst = input().strip().split()
   lst = [int(x) for x in lst]

   return createList(lst)

def main():
   num1 = read_one_list()
   num2 = read_one_list()

   num3 = add(num1, num2)
   print_list(num3)

if __name__ == '__main__':
    main()
