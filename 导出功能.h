//导出函数
void daochu(struct goods *p) {
	int i = 0;
	printf("正在导出库内商品信息...");
	Sleep(750);
	if (p->size != 0) {
		system("cls");
		printf("表列中仍然含有商品信息，请先退货后重试");
		return;
	} else {
		FILE *p1 = fopen("商品日记本", "r+");//C:\\Users\\lenovo\\Desktop\\课程设计\\.txt
		if (p1 == NULL) {
			printf("导出失败");
			return;
		}
		char ch = fgetc(p1);
		if (ch == EOF) {
			system("cls");
			printf("库内为空");
			return;
		}
		for (i = 0;; i++) {
			if (feof(p1) != 0) {
				break;
			}
			fscanf(p1, "%s\n%s\n%f\n%f\n%d\n\n\n", p->xx[i].bh, p->xx[i].bhstr, &(p->xx[i].jinjia), &(p->xx[i].shoujia),
			       &(p->xx[i].kucun));
			p->size++;
			if (p->size == p->cap) {
				zengrong(p);
				p->cap = p->cap + 2;
			}
		}
		system("cls");
		printf("导出成功");
		fclose(p1);
		p1 = NULL;
	}
}