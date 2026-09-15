// 2AddTwoNumbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {
public:
       /* ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
            ListNode* head = new ListNode(0);
            ListNode* cur = head;
            int carry = 0;
            while (l1 != nullptr || l2 != nullptr || carry > 0) {
                int sum = carry;
                if (l1 != nullptr) {
                    sum += l1->val;
                    l1 = l1->next;
                }
                if (l2 != nullptr) {
                    sum += l2->val;
                    l2 = l2->next;
                }
                cout << sum << " ";
                carry = sum / 10;
                cur->next = new ListNode(sum % 10);
                cur = cur->next;
            }
            return head->next;
        }
    */
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) { // with better time aproach

        ListNode* temp = new ListNode(0);
        ListNode* curr = temp;

        int carry = 0;

        while (l1 != NULL || l2 != NULL || carry != 0) {

            int x = (l1 != NULL) ? l1->val : 0;
            int y = (l2 != NULL) ? l2->val : 0;

            int sum = x + y + carry;

            carry = sum / 10;
            int digit = sum % 10;

            curr->next = new ListNode(digit);
            curr = curr->next;

            if (l1 != NULL)
                l1 = l1->next;

            if (l2 != NULL)
                l2 = l2->next;
        }

        return temp->next;
    }
};

int main()
{
    std::cout << "Hello World!\n";
}
