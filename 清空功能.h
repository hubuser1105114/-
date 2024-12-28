//清空函数
void easy(struct goods *p) {
	int n = 0;
	printf("确定清空商品表列？\n是->1  否->2\n");
	scanf("%d", &n);
	if (n == 2) {
		system("cls");
		return;
	} else	if (n == 1) {
		free(p->xx);
		p->xx = NULL;
		first(p);
		system("cls");
		printf("清空成功");
	} else {
		system("cls");
		printf("输入错误!");
		return;
	}
}