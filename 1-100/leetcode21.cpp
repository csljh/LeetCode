//新建一个链表，然后比较两个链表中的元素值，
//把较小的那个链到新链表中，由于两个输入链表的长度可能不同
//所以最终会有一个链表先完成插入所有元素，则直接另一个未完成的链表直接链入新链表的末尾：

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *dummy = new ListNode(-1), *cur = dummy;
        while (l1 && l2) {
            if (l1->val < l2->val) {
                cur->next = l1;
                l1 = l1->next;
            } else {
                cur->next = l2;
                l2 = l2->next;
            }
            cur = cur->next;
        }
        cur->next = l1 ? l1 : l2;
        return dummy->next;
    }
};
