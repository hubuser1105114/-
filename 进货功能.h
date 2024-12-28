//进货菜单函数
void jinhuomenu(void) {
	int num = 0;
	system("cls");
	printf("\n\n\n\n\n");
	printf("\t\t\t\t*****************************************************\n");
	printf("\t\t\t\t**                                                 **\n");
	printf("\t\t\t\t**                      进货                       **\n");
	printf("\t\t\t\t**                                                 **\n");
	printf("\t\t\t\t**        1.引进新商品         2.购进原有商品      **\n");
	printf("\t\t\t\t**                                                 **\n");
	printf("\t\t\t\t**        0.返回主菜单                             **\n");
	printf("\t\t\t\t**                                                 **\n");
	printf("\t\t\t\t*****************************************************\n");
	printf("\t\t\t\t请输入:");
	scanf("%d", &num);
	if (num == 0) {
		system("cls");
		return;
	} else if (num == 1) {
		system("cls");
		jinhuo1(p);
	} else if (num == 2) {
		system("cls");
		jinhuo2(p);
	} else {
		system("cls");
		printf("输入错误！");
		return;
	}
}

//进货函数1(引进新货物)
void jinhuo1(struct goods *p) {
	if ((p->cap) == (p->size)) {
		printf("正在增容,请稍后\n");
		Sleep(500);
		system("cls");
		zengrong(p);
		printf("增容成功\n");
		p->cap = p->cap + 2;
	}
	printf("请输入商品的相关信息:\n");
	printf("商品编号(输入-1可强制退出)：\n");
	scanf("%s", p->xx[p->size].bh);
	if(strcmp(p->xx[p->size].bh,"-1")==0){system("cls");return;}
	int i=0;
	if(p->size!=0)
	{ for(i=0;i<p->size;i++)
	  if(strcmp(p->xx[p->size].bh,p->xx[i].bh)==0)break;
	  if(i!=p->size)
	  {system("cls");printf("输入的商品编号重复！");return;
	  }
	}
	printf("商品名称：\n");
	scanf("%s",  p->xx[p->size].bhstr);
	printf("商品进价：\n");
	scanf("%f", &( p->xx[p->size].jinjia));

	printf("商品售价：\n");
	scanf("%f", &( p->xx[p->size].shoujia));
	printf("商品库存：\n");
	scanf("%d", &( p->xx[p->size].kucun));
	p->size = p->size + 1;
	system("cls");
	printf("进货成功");
}
//进货2功能函数（购进原有货物）
void jinhuo2(struct goods *p) {
	char arr[30] = {0};
	printf("请输入你想购进的商品的商品编号：\n");
	scanf("%s", arr);
	struct xinxi *ps = search(p, arr);
	if (ps == NULL) {
		system("cls");
		printf("表列没有查询到任何相关商品");
		return;
	} else {
		system("cls");
		printf("商品编号\t商品名称\t商品进价\t商品售价\t商品库存数量\n");
		printf("%s\t        %s\t        %.3f\t        %.3f\t         %d",   ps->bh,  ps->bhstr,
		       ps->jinjia, ps->shoujia, ps->kucun);
		printf("\n请输入你想要购进的数量(输入0可退出)：\n");
		int i = 0;
		scanf("%d", &i);
		if (i < 0) {
			system("cls");
			printf("输入错误！");
			return;
		}
		if (i > 0) {
			system("cls");
			printf("进货成功!");
			ps->kucun += i;
			return;
		}
		if(i==0){system("cls");return;}
	}
}
