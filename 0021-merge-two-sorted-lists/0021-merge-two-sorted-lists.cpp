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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int> mergedValues;

        // Merge the values of both lists into the vector
        while (list1 != nullptr && list2 != nullptr) {
            if (list1->val <= list2->val) {
                mergedValues.push_back(list1->val);
                list1 = list1->next;
            } else {
                mergedValues.push_back(list2->val);
                list2 = list2->next;
            }
        }
        while (list1 != nullptr) {
            mergedValues.push_back(list1->val);
            list1 = list1->next;
        }

        while (list2 != nullptr) {
            mergedValues.push_back(list2->val);
            list2 = list2->next;
        }
        ListNode* mergedList = nullptr;
        ListNode* current = nullptr;
        
        for(int i=0; i<mergedValues.size(); i++){
            if(mergedList==nullptr){
                mergedList=new ListNode(mergedValues[i]);
                current=mergedList;
            }
            else{
                current ->next=new ListNode(mergedValues[i]);
                current=current->next;
            }
        }
        return mergedList;
    }
};
