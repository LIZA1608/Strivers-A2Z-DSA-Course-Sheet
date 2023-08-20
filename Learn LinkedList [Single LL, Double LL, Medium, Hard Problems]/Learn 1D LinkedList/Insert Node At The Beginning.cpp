Node* insertAtFirst(Node* list, int newValue) {
    // Write your code here
    Node* temp=new Node(newValue);
    if(list==NULL) return temp;
    temp->next=list;
    return temp;
}
