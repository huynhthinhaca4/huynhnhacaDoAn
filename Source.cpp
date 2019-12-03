#include "Header.h"
int docFile(const char* tenfile, DANHSACHKE& x, int flag) {
	FILE* f = fopen(tenfile, "rt");
	if (f == NULL) return 0;
	fscanf(f, "%d", &x.n);
	for (int i = 0; i < x.n; i++)
		x.dsk[i] = NULL;
	for (int i = 0; i < x.n; i++)
	{
		int m;
		fscanf(f, "%d", &m);
		for (int j = 0; j < m; j++)
		{
			NODE* p = new NODE;
			if (flag)
				fscanf(f, "%d%d", &p->dinhke, &p->trongso);
			else
				fscanf(f, "%d", &p->dinhke);
			p->link = x.dsk[i];
			x.dsk[i] = p;
		}
	}
	fclose(f);
	return 1;
}
int ghiFile(const char* tenfile, DANHSACHKE& x, int flag) {
	FILE* f = fopen(tenfile, "wt");
	if (f == NULL) return 0;
	fprintf(f, "%d", x.n);
	for (int i = 0; i < x.n; i++) {
		NODE* p = x.dsk[i];
		int m = demNode(p);
		fprintf(f, "\n%d", m);
		while (p != NULL) {
			if (flag)
				fprintf(f, " %d %d", p->dinhke, p->trongso);
			else
				fprintf(f, " %d", p->dinhke);
			p = p->link;
		}
	}
	fclose(f);
	return 1;
}

