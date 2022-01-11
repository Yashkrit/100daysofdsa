ListNode* mergetTwoLists(ListNode* list1, ListNode* list2){
    ListNode* head = new ListNode(0);
    ListNode* cur = head;
    while(list1 && list2){
        if(list1->val < list2->val){
            cur->next = list1;
            list1 = list1->next;
        }
        else{
            cur->next = list2;
            list2 = list2->next;
        }
        cur = cur->next;
    }
    if(list1){
        cur->next = list1;
    }
    else{
        cur->next = list2;
    }
    return head->next;
}