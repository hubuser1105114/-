//退货功能函数
void tuihuo(struct goods *p) {
	char tui[20] = {0};
	int j = 0;
	printf("请输入你想退的货品的商品编号：\n");
	scanf("%s", tui);
	struct xinxi *p1 = search(p, tui);
	if (p1 == NULL) {
		system("cls");
		printf("没有此商品");
		return;
	}
	system("cls");
	printf("商品编号\t商品名称\t商品进价\t商品售价\t商品库存数量\n");
	printf("%s\t        %s\t        %.3f\t        %.3f\t         %d\n",  p1->bh,  p1->bhstr,
	       p1->jinjia,  p1->shoujia,  p1->kucun);
	printf("确定退货？\n是->1   否->2\n");
	scanf("%d", &j);
	if (j == 1) {
		if (p->size == 1) {
			p->size--;
		} else {
			strncpy(p1->bh, p->xx[p->size - 1].bh, 30);
			strncpy(p1->bhstr, p->xx[p->size - 1].bhstr, 30);
			p1->jinjia = p->xx[p->size - 1].jinjia;
			p1->shoujia = p->xx[p->size - 1].shoujia;
			p1->kucun = p->xx[p->size - 1].kucun;
			p->size--;
		}
		printf("退货成功");
		return;
	} else if (j == 2) {
		return;
	} else {
		system("cls");
		printf("输入错误！");
		printf("\a");
	}
}
