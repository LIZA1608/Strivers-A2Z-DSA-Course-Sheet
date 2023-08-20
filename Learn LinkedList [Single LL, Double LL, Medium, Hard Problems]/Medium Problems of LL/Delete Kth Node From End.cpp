Node* removeKthNode(Node* head, int K)
{
    if(head==NULL || K==0) return head;
    int l=0;
    Node*temp=head;
    while(temp!=NULL){
        l++;
        temp=temp->next;
    }
    if(K==l){
        Node*next=head->next;
        head->next=NULL;
        head=next;
    }
    else{
        int count=0;
        temp=head;
        while(temp!=NULL){
            count++;
            if(l-K==count){
                temp->next=temp->next->next;
                break;
            }
            temp=temp->next;
        }
    }
    return head;
}


//using 2 pointer->
Node* removeKthNode(Node* head, int K)
{
    Node* slow=head;
    Node* fast=head;
    for(int i=0;i<K;i++){
       fast=fast->next;
    }
    if(fast==NULL){
        return head->next;
    }
    while(fast->next!=NULL){
        fast=fast->next;
        slow=slow->next;
    }
    slow->next=slow->next->next;
    return head;
}
