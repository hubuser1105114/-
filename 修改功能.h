//修改函数
void modify(struct goods *p) {
	int num = 0;
	char arr[30] = {0};
	printf("请输入您想要修改的商品的商品编号：\n");
	scanf("%s", arr);
	struct xinxi *ps = search(p, arr);
	Sleep(100);
	system("cls");
	printf("检索中");
	Sleep(250);
	system("cls");
	printf("检索中.");
	Sleep(250);
	system("cls");
	printf("检索中..");
	Sleep(250);
	system("cls");
	printf("检索中...");
	Sleep(250);
	system("cls");
	if (ps == NULL) {
		system("cls");
		printf("没有检索到任何相关商品");
		return;
	} else {
		system("cls");
		printf("检索成功\n");
		Sleep(1250);
		system("cls");
		printf("商品编号\t商品名称\t商品进价\t商品售价\t商品库存数量\n");
		printf("%s\t        %s\t        %.3f\t        %.3f\t         %d\n",  ps->bh,  ps->bhstr,
		       ps->jinjia,  ps->shoujia,  ps->kucun);
		printf("\n您想修改?\n商品编号->1   商品名称->2   商品进价->3   商品售价->4   商品库存->5\n");
		scanf("%d", &num);
		if (num == 1) {
			printf("请修改：\n");
			scanf("%s", ps->bh);
			system("cls");
			printf("修改成功");
			return;
		} else if (num == 2) {
			printf("请修改：\n");
			scanf("%s", ps->bhstr);
			system("cls");
			printf("修改成功");
			return;
		} else if (num == 3) {
			printf("请修改：\n");
			scanf("%f", &(ps->jinjia));
			system("cls");
			printf("修改成功");
			return;
		} else if (num == 4) {
			printf("请修改：\n");
			scanf("%f", &(ps->shoujia));
			system("cls");
			printf("修改成功");
			return;
		} else if (num == 5) {
			printf("请修改：\n");
			scanf("%d", &(ps->kucun));
			system("cls");
			printf("修改成功");
			return;
		} else {
			system("cls");
			printf("输入错误!");
			return;
		}
		system("cls");
		printf("修改成功");

	}
}

