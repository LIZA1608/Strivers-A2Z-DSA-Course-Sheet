
Node* constructDLL(vector<int>& arr) {
    // Write your code here
    int n=arr.size();
    Node*head =new Node(arr[0]);
    Node*temp=head;
    head->prev=nullptr;
    for(int i=1;i<n;i++){
        Node*curr=head;
        head->next=new Node(arr[i]);
        head=head->next;
        head->prev=curr;
    }
    return temp;
}
