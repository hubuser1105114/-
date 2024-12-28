//商品销售函数
void spxs(struct goods *p) {
	int j = 0;
	int num = 0;
	char aim[] = {0};
	printf("请输入你想要销售的商品编号：\n");
	scanf("%s", aim);
	struct xinxi *p1 = search(p, aim);
	if (p1 == NULL) {
		system("cls");
		printf("库内没有你所想销售的商品");
		return;
	}
	system("cls");
	printf("商品编号\t商品名称\t商品进价\t商品售价\t商品库存数量\n");
	printf("%s\t        %s\t        %.3f\t        %.3f\t         %d\n",  p1->bh,  p1->bhstr,
	       p1->jinjia,  p1->shoujia,  p1->kucun);
	printf("\n确定销售？\n是->1   否->2\n");
	scanf("%d", &j);
	printf("\n");
	system("cls");
	if (j == 1) {
		printf("请输入你想要销售的数量：\n");
		scanf("%d", &num);
		if (num > p1->kucun) {
			printf("商品库存不足,无法销售");
			return;
		} else {
			p1->kucun = p1->kucun - num;
			printf("\n销售成功");
		}

	} else if (j == 2) {
		return;
	} else {
		printf("输入错误");
		return;
	}
}
