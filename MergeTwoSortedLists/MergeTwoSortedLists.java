import crio.ds.List.ListNode;
import java.io.*;
import java.util.*;

public class MergeTwoSortedLists {
    // Implement your solution by completing the below function
    public ListNode mergeTwoLists(ListNode l1, ListNode l2) {

        return new ListNode(-1);
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int[] firstList = new int[scanner.nextInt()];
        for (int i = 0; i < firstList.length; ++i)
            firstList[i] = scanner.nextInt();

        int[] secondList = new int[scanner.nextInt()];
        for (int i = 0; i < secondList.length; i++)
            secondList[i] = scanner.nextInt();
        scanner.close();

        ListNode firstListHead = ListNode.arrayToListNode(firstList);
        ListNode secondListHead = ListNode.arrayToListNode(secondList);

        ListNode resultHead = new MergeTwoSortedLists().mergeTwoLists(firstListHead, secondListHead);
        String mergedListString = ListNode.listNodeToString(resultHead);
        System.out.print(mergedListString);
    }
}
