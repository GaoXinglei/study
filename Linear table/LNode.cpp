 //��׼β�巨����������
 void creatlistR(LNode *&C,int a[],int n)
 {
 	LNode *s,*r;
 	int i;
 	C=(LNode *)malloc(sizeof(LNode));
 	C->next=NULL;
 	r=C;
	for(i=0;i<n;++i)
	{
		s=(LNode *)malloc(sizeof(LNode));
		s->data=a[i];
		r->next=s;
		r=r->next;		
	 } 
	r->next=NULL;
	
  } 
//��׼ͷ�巨����������
voild createlistF(LNode *&C,int a[],int n) 
{
	LNode *s;
	int i;
	C=(LNode *)malloc(sizeof(LNode));
	c->next=NULL;
	for (i=0;i<n;i++)
	{
		s=(LNode *)malloc(sizeof(LNode));
		s->data=a[i];
		s->next=C->next;
		C-next=s; 
	}
}
//����ڵ�Ĳ�������
s->next=C->next;
C->next=s; 
//ɾ���ڵ�Ĳ�������
q=p->next;
p->next=p->next->next;
free(q);
//��������C����ͷ��㣩���Ƿ����һ��ֵΪx�Ľ�㣬�����ڣ���ɾ���ý�������1�����򷵻�0��
int findAndDelete(LNode *C,int x)
{
	LNode *P,*q;
	p=C;
	while(p->next!=NULL)
	{
		if(p->next->data==x) 
			break;
		p=p->next;
	}
	if(p->next=NULL)
		return 0;
	else
	{
		q=p->next;
		p->next=p->next->next;
		free(q);
		return 1;	
	}
 } 
//A��B����������������ͷ��㣩������Ԫ�ص����������һ���㷨����A��B�鲢��һ����Ԫ��ֵ�ǵݼ����������C,C��A��B�еĽ����ɡ�
void merge(LNode *A,LNode *B,LNode *&C)
{
	LNode *p=A->next;
	LNode *q=A->next;
	LNode *r;
	C=A;
	C->next=NULL;
	free(B);
	r=C;
	while(p!==NULL&&q!==NULL)
	{
		if(p->data<=q->data)
		{
			r->next=p;p=p->next;
			r=r->next;
		}
		else
		{
			r->next=q;q=q->next;
			r=r->next;
		}
	}
	r->next=NULL;
	if(p!=NULL) r->next=p;
	if(q!=NULL) r->next=q;
 } 
//����������������Ϊ�ǵ�����������C������Ҫʹ��ͷ����ơ�
void merge(LNode *A,LNode *B,LNode *&C)
{
	LNode *p=A->next;
	LNode *q=B->next;
	Lnode *s;
	C=A;
	C->next=NULL;
	free(B);
	while(p!=NULL&&q!=NULL)
	{
		if(p->data<=q->data)
		{
			s=p;p=p->next;
			s->next=C->next;
			C->next=s;
		}
		else
		{
			s=q;q=q->next;
			s->next=C->next;
			C-next=s;
		}
	}
	while(p!=NULL)
	{
		s=p;
		p=p->next;
		s->next-C->next;
		C->next=s;
	}
	while(q!=NULL)
	{
		s=q;
		q=q->next;
		s->next=C->next;
		C-next=s;
	}
 } 
