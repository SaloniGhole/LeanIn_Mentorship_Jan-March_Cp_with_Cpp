struct Node *insertAtBegining(struct Node *head, int x) {

	struct Node* p=(struct Node*)malloc(sizeof(struct Node));
	
	p->data=x;
	if(head == NULL)
	{
	    p->next=NULL;
	    head = p;
	    return head;
	}
	p->next=head;
	head=p;
	return head;
}
struct Node *insertAtEnd(struct Node *head, int x)  {

	//code here
	struct Node* q=head;
	struct Node* r=(struct Node*)malloc(sizeof(struct Node));
	r->data=x;
	if(head == NULL)
	{
	    r->next=NULL;
	    head = r;
	    return head;
	}
	
	while(q->next != NULL)
	    q=q->next;
	    q->next=r;
	    r->next=NULL;
	return head;
}
