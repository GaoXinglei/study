//������
	//˳������	 
#define maxSize 100
typedef struct
{
	int data[maxSize];
	
	int length;
 } Sqlist;
 
	//���Գ���
 typedef struct
 {
 	int A[maxSize];
 	in n;
 	
 }
 
	//������ 
typedef  struct LNode
{
	int data;
	struct LNode *next;
 }LNode;
	//˫����
typedef struct DLNode
{
	int data;
	struct DLNode *prior;
	struct DLNode *next;
 }DLNode;
 	
