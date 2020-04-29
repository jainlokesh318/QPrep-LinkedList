import java.io.*;
import java.util.*;
import crio.ds.List.ListNode;


class Palindrome {

  public static void  main (String args []) {
    Scanner sc =  new  Scanner (System.in);

    int n = sc.nextInt();
    ArrayList <Integer> list = new ArrayList<Integer> ();
    int x;
    for ( int i = 0 ; i < n; i++) {
      x = sc.nextInt();
      list.add(x);
    }
    ListNode head = ListNode.createList(list);
    boolean flag  = Solution.isPalindrome(head);

    if (flag == true ) {
      System.out.print("Yes");
    } else {
      System.out.print("No");
    }

  }

}
