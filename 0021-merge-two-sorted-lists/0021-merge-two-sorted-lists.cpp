class Solution 
{
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2)
    {
        ListNode* dummy = new ListNode(0);
        ListNode* cur = dummy;

        while (l1 != nullptr && l2 != nullptr) {
            if (l1->val < l2->val) {
                cur->next = l1;
                l1 = l1->next;
            } else {
                cur->next = l2;
                l2 = l2->next;
            }
            cur = cur->next;
        }

        if (l1 != nullptr) {
            cur->next = l1;
        } else {
            cur->next = l2;
        }
        
        ListNode* mergedList = dummy->next;
        delete dummy; // Free the dummy node
        return mergedList;
    }
};