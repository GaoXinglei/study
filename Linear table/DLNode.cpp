//˫����Ĳ���
	//����β�巨��������
void createDlishR(DLNode *&L,int a[],int n)
{
	DLNode *s,*r;
	int i;
	L=(DLNode *)malloc(sizeof(DLNode));
	L->prior=NULL;
	L->next=NULL;
	r=L;
	for(i=0;i<n;++i)
	{
		s=(DLNode *)malloc(sizeof(DLNode));
		s->data=a[i];
		r->next=s;
		s->prior=r;
		r=s;
	}
	r-next=NULL;
 } 	
 	//���ҽ���㷨
void findNode(DLNode *&L)
{
	DLNode *p=C->next;
	while(p!=NULL)
	{
		if(p->data==x)
			break;
		p=p->next; 
	}
	return p;
 } 
 	//�������㷨
s->next=p->next;
s->prior= p;
p->next= s;
p->next->prior=s;
	//ɾ������㷨
q=p->next;
p->next=q->next;
q->next->prior=q;
free(q);
