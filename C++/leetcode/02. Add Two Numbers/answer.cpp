/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* traversal = new ListNode();
        ListNode* answer = traversal;

        int large_size = 0;

        int size1 = listSize(l1);
        int size2 = listSize(l2);

        large_size = size1 > size2 ? size1 : size2;

        for(int i = 0 ; i < large_size ; i++) {
            // if(traversal->next == nullptr) {
            //     traversal->next = new ListNode();
            // }

            if(i != 0) {
                traversal = traversal->next;
            }
            int n1 = 0, n2 = 0;

            if(l1 != nullptr) {
                n1 = l1->val;
                l1 = l1->next;
            }

            if(l2 != nullptr) {
                n2 = l2->val;
                l2 = l2->next;
            }

            if(traversal->val + n1 + n2 >= 10) {
                traversal->next = new ListNode(1);
                traversal->val += ((n1+n2) - 10);
            } else {
                traversal->next = new ListNode();
                traversal->val += (n1+n2);
            }
        }

        if(traversal->next != nullptr && traversal->next->val == 0) {
            traversal->next = nullptr;
        }

        return answer;
    }

    int listSize(ListNode* lst) {
        int count = 0;

        for(; lst != nullptr ; lst = lst->next) {
            count++;
        }

        return count;
    }
};