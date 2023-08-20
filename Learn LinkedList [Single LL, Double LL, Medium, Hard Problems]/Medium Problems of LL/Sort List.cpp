Node* reverse(Node* head){
    Node*curr=head;
    Node* prev=NULL;
    while(curr!=NULL){
        head=head->next;
        curr->next=prev;
        prev=curr;
        curr=head;
    }
    return prev;
}
Node* merge(Node* head1,Node* head2){
    if(head1==NULL) return head2;
    if(head2==NULL) return head1;
    Node* h3=NULL;
    Node* t3=NULL;
    if(head1->data<head2->data){
        h3=head1;
        t3=head1;
        head1=head1->next;
    }
    else{
        h3=head2;
        t3=head2;
        head2=head2->next;
    }
    while(head1!=NULL && head2!=NULL){
        if(head1->data<head2->data){
            t3->next=head1;
            head1=head1->next;
            t3=t3->next;
        }
        else{
            t3->next=head2;
            head2=head2->next;
            t3=t3->next;
        }
    }
    if(head1!=NULL) t3->next=head1;
    if(head2!=NULL) t3->next=head2;
    return h3;
}
Node* sortList(Node* head){
    if(head==NULL || head->next==NULL) return head;
    Node* ascHead=NULL;
    Node* ascTail=NULL;
    Node* descHead=NULL;
    Node* descTail=NULL;
    Node* temp=head;
     // Initialize the ascending and descending halves
    ascHead = ascTail = temp;
    temp = temp->next;
    descHead = descTail = temp;
    temp = temp->next;

    // Split the list into ascending and descending halves
    while (temp != NULL) {
        ascTail->next = temp;
        ascTail = ascTail->next;
        temp = temp->next;

        if (temp != NULL) {
            descTail->next = temp;
            descTail = descTail->next;
            temp = temp->next;
        }
    }

    // Terminate the ascending and descending halves
    ascTail->next = NULL;
    descTail->next = NULL;

    // Reverse the descending half
    descHead = reverse(descHead);

    // Merge the sorted ascending and descending halves
    Node* ansHead = merge(ascHead, descHead);
    return ansHead;
}
