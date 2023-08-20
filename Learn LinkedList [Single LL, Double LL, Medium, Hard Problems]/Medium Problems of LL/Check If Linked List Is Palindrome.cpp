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
bool isPalindrome(Node *head)
{
    if(head==NULL || head->next==NULL) return true;
    Node*slow=head;
    Node*fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    slow=reverse(slow);
    fast=head;
    while(slow!=NULL){
        if(fast->data!=slow->data) return false;
        fast=fast->next;
        slow=slow->next;
    }
    return true;
}
