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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
            ListNode* dummy = new ListNode(0); // Dummy node to simplify edge cases
        dummy->next = head;
        ListNode* current = dummy;
        
        while (current->next != nullptr && current->next->next != nullptr) {
            ListNode* first = current->next;
            ListNode* second = current->next->next;
            
            int gcdValue = gcd(first->val, second->val);
            ListNode* gcdNode = new ListNode(gcdValue);
            
            // Insert gcdNode between first and second
            first->next = gcdNode;
            gcdNode->next = second;
            
            // Move to the next pair
            current = gcdNode;
        }
        
        return dummy->next;
    }
};