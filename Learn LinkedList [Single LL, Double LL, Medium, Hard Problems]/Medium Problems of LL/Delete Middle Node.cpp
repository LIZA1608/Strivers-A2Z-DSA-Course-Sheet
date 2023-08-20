Node* deleteMiddle(Node* head){
    Node* slow=head;
    Node* fast=head;
    if(head->next==NULL) return NULL;
    while(fast->next->next!=NULL && fast->next->next->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    slow->next=slow->next->next;
    return head;
}
