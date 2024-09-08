class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int length = 0;
        ListNode* temp = head;
        
        // Step 1: Calculate the length of the list
        while (temp) {
            length++;
            temp = temp->next;
        }
        
        int partSize = length / k;
        int extraNodes = length % k;
        
        vector<ListNode*> result(k, nullptr);
        ListNode* current = head;
        
        // Step 2: Create parts
        for (int i = 0; i < k && current; i++) {
            result[i] = current;
            int currentPartSize = partSize + (extraNodes-- > 0 ? 1 : 0);
            
            for (int j = 1; j < currentPartSize; j++) {
                current = current->next;
            }
            
            ListNode* nextPart = current->next;
            current->next = nullptr; // Break the list
            current = nextPart;
        }
        
        return result;
    }
};
