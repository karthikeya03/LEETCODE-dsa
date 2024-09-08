class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*> result(k, nullptr);
        
        // Step 1: Calculate the total length
        ListNode* temp = head;
        int length = 0;
        while (temp) {
            length++;
            temp = temp->next;
        }
        
        int partSize = length / k;
        int extraNodes = length % k;
        
        temp = head;
        for (int i = 0; i < k && temp; i++) {
            result[i] = temp;
            int nodesInCurrentPart = partSize + (extraNodes-- > 0 ? 1 : 0);
            
            // Move temp to the end of the current part
            for (int j = 1; j < nodesInCurrentPart; j++) {
                temp = temp->next;
            }
            
            // Disconnect current part from the rest of the list
            ListNode* nextPart = temp->next;
            temp->next = nullptr;
            temp = nextPart;
        }
        
        return result;
    }
};
