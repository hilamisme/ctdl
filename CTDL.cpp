//#include<iostream>
//using namespace std;
//struct node
//{
//	int data;
//	struct node* pNext;
//};
//struct list
//{
//	node* phead;
//	node* ptail;
//};
//void create(list& l)
//{
//	l.phead = NULL;
//	l.ptail = NULL;
//}
//node* createnode(int x)
//{
//	node* p = new node;
//	p->data = x;
//	p->pNext = NULL;
//	return p;
//}
//void addhead(list& l, node* p)
//{
//	if (!l.phead)
//	{
//		l.phead = l.ptail = NULL;
//	}
//	else
//	{
//		p->pNext = l.phead;
//		l.phead=p;
//	}
//}
//void addtail(list& l, node* p)
//{
//	if (!l.phead)
//	{
//		l.phead = l.ptail = NULL;
//	}
//	else
//	{
//		l.ptail->pNext = p;
//		l.ptail = p;
//	}
//}
//void nhap(list& l)
//{
//	node* p;
//	p = l.phead;
//	while (p != NULL)
//	{
//		cout << p->data;	
//		p = p->pNext;
//	}
//	int n;
//	cin >> n;
//	if (n == 0) cout << "danh sach rong: ";
//	else
//	{
//		int x[100];
//		for (int i = 0; i < n; i++)
//		{
//			cin >> x[i];
//		}
//		cout << "danh sach vua nhap la: " << " ";
//		for (int i = 0; i < n; i++)
//		{
//			cout << x[i]<<" ";
//
//		}
//		cout << endl;
//		addtail(l, p);
//		cout << "So lan xuat hien cua tung phan tu trong danh sach la: " << endl;
//		int count = 0;
//		for (int i = 0; i < n; i++)
//		{
//		}
//	}
//
//}
//int main()
//{
//	list l;
//	create(l);
//	nhap(l);
//	
//	return 0;
//}

#include<iostream>
using namespace std;
int main()
{
	return 0;
}