//��֪һ��˳���L,���е�Ԫ�ص����������������һ���㷨������һ��Ԫ��x(xΪint��)�󱣳ָ�˳�����Ȼ�����������У�����������ܳɹ����� 
int findElem (Sqlist L,int x)
{
	int i;
	for(i=0;i<L.length;++i)
	{
		if(x<L.data[i])
		{
			return i;
		}
	}
	return i;
}
void insertElem(Sqlist &L,int x)//L����Ҫ�����仯 ����Ҫʹ�������� 
{
	int p,i;
	p=findElem(L,x);
	for(i=L.length-1;i>=p;--i) 
		L.data[i+1]=L.data[i];
	L.data[p]=x;
	++(L.length);
}
