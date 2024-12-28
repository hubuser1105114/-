//信息查询函数
void xxcx(struct goods *p) {
	char arr[20] = {0};
	int i = 0;
	printf("请输入你想要查询的商品编号:\n");
	scanf("%s", arr);
	struct xinxi *ps = search(p, arr);
	Sleep(100);
	system("cls");
	printf("查询中");
	Sleep(250);
	system("cls");
	printf("查询中.");
	Sleep(250);
	system("cls");
	printf("查询中..");
	Sleep(250);
	system("cls");
	printf("查询中...");
	Sleep(250);
	system("cls");
	if (ps == NULL) {
		system("cls");
		printf("没有查询到任何相关商品");
		return;
	} else {
		system("cls");
		printf("查询成功\n");
		Sleep(1500);
		system("cls");
		printf("商品编号\t商品名称\t商品进价\t商品售价\t商品库存数量\n");
		printf("%s\t        %s\t        %.3f\t        %.3f\t         %d",   ps->bh,  ps->bhstr,
		       ps->jinjia, ps->shoujia, ps->kucun);
	}
}
