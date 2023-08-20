Node* segregateEvenOdd(Node* head)
{
    Node *oddStart = NULL;
    Node *oddEnd = NULL;
    Node *evenStart = NULL;
    Node *evenEnd = NULL;
    Node *curr = head; 
    while(curr != NULL)
    {
        int currVal = curr -> data;
        if(currVal % 2 == 0)
        {
            if(evenStart == NULL)
            {
                evenStart = new Node(currVal);
                evenEnd = evenStart;
            }
            else
            {
                evenEnd -> next = curr;
                evenEnd = evenEnd -> next;
            }
        }
        else
        {
            if(oddStart == NULL)
            {
                oddStart = new Node(currVal);
                oddEnd = oddStart;
            }
            else
            {
                oddEnd -> next = curr;
                oddEnd = oddEnd -> next;
            }
        }
        curr = curr -> next;
    }
    if(oddStart!= NULL and evenStart != NULL)
    {
        evenEnd -> next = oddStart;
        oddEnd -> next = NULL;
        head = evenStart;
    }
    return head;
}
