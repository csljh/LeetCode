/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
 /*������Ҫע��ĵط��ǣ�
 	 1��ListNode preHead(0)  *p = &preHead  ��������runtime error 
 	 2�����ִ���ɵĴ��뿴�����ǳ�����
*/
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode preHead(0),*p = &preHead;
        int index = 0;
        while(l1 || l2 || index){
            int sum = (l1?l1->val:0) + (l2?l2->val:0) + index;
            index = sum/10;
            ListNode* cur = new ListNode(sum%10);
            p->next = cur;
            p = p->next;
            l1 = l1?l1->next:NULL;
            l2 = l2?l2->next:NULL;
        }
        return preHead.next;
    }
};