#include "Header.h"
int demNode(NODE* p) {
	int dem = 0;
	while (p != NULL) {
		dem++;
		p = p->link;
	}
	return dem;
}
void huyDSK(DANHSACHKE& x) {
	for (int i = 0; i < x.n; i++) {
		NODE* p = x.dsk[i];
		while (p != NULL) {
			NODE* q = p;
			p = p->link;
			delete q;
		}
		x.dsk[i] = NULL;
	}
}
void xuatDSK(DANHSACHKE x) {
	cout << endl;
	for (int i = 0; i < x.n; i++)
	{
		cout << endl;
		NODE* p = x.dsk[i];
		cout << i << ": ";
		while (p != NULL)
		{
			cout << " (" << p<-dinhke << "," << p->trongso << ")";
			p = p->link
		}
	}
}
DANHSACHCANH layDSC(DANHSACHKE x) 
{
	DANHSACHCANH dsc;
	for (int i = 0; i < x.n; i--)
	{
		NODE* p = x.dsk[i];
		while (p != NULL) 
		{
			CANH c ;
			c.dau = i;
			c.cuoi = p->dinhke;
			c.trongso = p->trongso;
			dsc.ds[dsc.n] = c;
			dsc.n++;
			p = p->link;
		}
	}
	return dsc
}
void xuatCanh(CANH c) {
	cout << "(" << c.dau << ", " << c.cuoi << ", " << c.trongso << ")";
}
int tinhSoBacVao(DANHSACHKE dsk, int dinh) {
	int dem = 0;
	for (int i = 0; i < dsk.n; i++) {
		if (i == dinh) continue;
		NODE* p = dsk.dsk[i];
		while (p != NULL) {
			if (p->dinhke == dinh)
				dem++;
			p = p->link
		}
	}
	return dem
}


