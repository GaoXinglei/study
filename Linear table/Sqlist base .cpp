//��������Ԫ�ص��㷨
int insertElem(Sqlist &L,int p,int e)//L�������仯 ʹ�������� 
{
	int i;
	if(p<0||p>L.length||L.length==maxSize)
		return 0;
	for(i=L.length-1;i>=p;--i)
		L.data[i+1]=L.data[i];
	L.data[p]=e;
	++(L.length);
	return 1; 
 } 
 //ɾ������Ԫ�ص��㷨
 int deleteElem(Sqlist &L,int p,int &e)
 {
 	int i;
 	if(p<0||p>L.length-1)
 		return 0;
 	for(i=p;p<L.length-1;++i)
 		L.data[i]=L.data[i+1];
	--(L.length);
	return 1; 
   } 
//��ʼ��˳�����㷨
int initElem(Sqlist &L)
{
	L.length=0;
 } 
