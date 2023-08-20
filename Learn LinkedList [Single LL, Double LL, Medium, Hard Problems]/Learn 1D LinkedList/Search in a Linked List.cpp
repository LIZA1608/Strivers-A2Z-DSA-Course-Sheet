int searchInLinkedList(Node<int> *head, int k) {
    Node<int>*curr=head;
    while(head!=NULL){
        if(head->data==k)return 1;
        head=head->next;
    }
    return 0;
}
