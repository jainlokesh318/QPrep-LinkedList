from crio.io import PrintMatrix
from crio.ds.List import ListNode

def mergeTwoLists(l1, l2):
    # TODO: CRIO_TASK_MODULE_L1_PROBLEMS
    # Your implementation goes here

    return None

if __name__ == '__main__':
    m = int(input())
    nums1 = input().split()
    nums1 = [int(i) for i in nums1]
    n = int(input())
    nums2 = input().split()
    nums2 = [int(i) for i in nums2]
    l1 = ListNode.createList(nums1)
    l2 = ListNode.createList(nums2)
    resultHead = mergeTwoLists(l1, l2)
    result = ListNode.extractList(resultHead)
    PrintMatrix.OneDMatrix(result, " ")
