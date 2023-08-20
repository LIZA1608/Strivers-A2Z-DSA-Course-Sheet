//iterative approch TC-O(N),SC->O(1)
Node* reverseLinkedList(Node *head)
{
    Node*curr=head;
    Node*prev=NULL;
    while(curr!=NULL){
        head=head->next;
        curr->next=prev;
        prev=curr;
        curr=head;
    }
    return prev;
}
// recurrsive TC->O(N), SC->O(N)
Node* reverseLinkedList(Node *head)
{
    if(head==NULL || head->next==NULL) return head;
    Node*curr=reverseLinkedList(head->next);
    head->next->next=head;
    head->next=NULL;
    return curr;
}
