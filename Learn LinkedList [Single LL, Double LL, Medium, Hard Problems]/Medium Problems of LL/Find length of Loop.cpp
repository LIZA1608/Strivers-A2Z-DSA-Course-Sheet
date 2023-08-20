
int lengthOfLoop(Node *head) {
    int n=0;
    Node* slow=head;
    Node*fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            n=1;
            slow=slow->next;
            while(slow!=fast){
                slow=slow->next;
                n++;
            }
            return n;
        }
    }
    return 0;
}
