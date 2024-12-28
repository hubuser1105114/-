//信息浏览函数
void spxxpx(struct goods *p) {
	int i = 0;
	if (p->size == 0) {
		system("cls");
		printf("无商品信息");
	} else {
		system("cls");
		printf("\t商品编号\t商品名称\t商品进价\t商品售价\t商品库存数量\n");
		for ( i = 0; i < (p->size); i++) {
			printf("\t%s\t        %s\t        %.3f\t        %.3f\t         %d",   p->xx[i].bh,  p->xx[i].bhstr,
			       p->xx[i].jinjia,  p->xx[i].shoujia,  p->xx[i].kucun);

			printf("\n");
		}
	}
}
