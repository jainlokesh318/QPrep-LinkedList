from Solution import *
from crio.ds.List.ListNode import *


def main():
   n = int(input().strip())
   lst = [int(x) for x in input().strip().split()]
   
   lst = createList(lst)
   
   if is_palindrome_list(lst):
       print("Yes")
   else:
       print("No")

if __name__ == '__main__':
    main()
