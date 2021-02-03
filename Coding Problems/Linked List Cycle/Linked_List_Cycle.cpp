/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        
        if(!head)
            return false;
        
        ListNode* node = head;
        ListNode* fastNode = head->next;
        
        while(node && fastNode){
            
            if(node == fastNode)
                return true;
            
            if(!fastNode->next)
                return false;
            
            node = node->next;
            fastNode = fastNode->next->next;
        }
        
        return false;
    }
};
