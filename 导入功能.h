//重新导入函数
void baocun2(struct goods *p) {
	int j = 0;
	printf("确定重新导入？\n是->1   否->2\n");
	scanf("%d", &j);
	if (j == 1) {
		Sleep(100);
		system("cls");
		printf("保存中");
		Sleep(250);
		system("cls");
		printf("保存中.");
		Sleep(250);
		system("cls");
		printf("保存中..");
		Sleep(250);
		system("cls");
		printf("保存中...");
		Sleep(250);
		system("cls");
		if (p->size == 0) {
			printf("无商品信息，重新导入失败");
			return;
		}
		FILE *p1 = fopen("商品日记本", "w");//C:\\Users\\lenovo\\Desktop\\课程设计\\.txt
		if (p1 == NULL) {
			printf("打开文件失败");
			exit(0);
		}
		for (int i = 0; i < p->size; i++) {
			fprintf(p1, "%s\n", p->xx[i].bh);
			fprintf(p1, "%s\n", p->xx[i].bhstr);
			fprintf(p1, "%.2f\n", p->xx[i].jinjia);
			fprintf(p1, "%.2f\n", p->xx[i].shoujia);
			fprintf(p1, "%d\n\n\n", p->xx[i].kucun);
		}
		printf("导入成功");
		fclose(p1);
		p1 = NULL;
	} else if (j == 2) {
		system("cls");
		return;
	} else {
		system("cls");
		printf("输入错误！");
		return;
	}
}
//追加导入函数
void baocun1(struct goods *p) {
	int i = 0;
	printf("确定追加导入？\n是->1   否->2\n");
	scanf("%d", &i);

	if (i == 2)
		return;
	else	if (i == 1) {
		Sleep(100);
		system("cls");
		printf("导入中");
		Sleep(250);
		system("cls");
		printf("导入中.");
		Sleep(250);
		system("cls");
		printf("导入中..");
		Sleep(250);
		system("cls");
		printf("导入中...");
		Sleep(250);
		system("cls");
		if (p->size == 0) {
			printf("无商品信息，追加导入失败");
			return;
		} else {
			FILE *p2 = fopen("商品日记本", "a");//C:\\Users\\lenovo\\Desktop\\课程设计\\.txt
			if (p2 == NULL) {
				printf("打开文件失败");
				exit(0);
			}
			for (int j = 0; j < p->size; j++) {
				fprintf(p2, "%s\n", p->xx[j].bh);
				fprintf(p2, "%s\n", p->xx[j].bhstr);
				fprintf(p2, "%.2f\n", p->xx[j].jinjia);
				fprintf(p2, "%.2f\n", p->xx[j].shoujia);
				fprintf(p2, "%d\n\n\n", p->xx[j].kucun);
			}
			printf("导入成功");
			fclose(p2);
			p2 = NULL;
		}
	} else {
		system("cls");
		printf("输入错误!");
		return;
	}
}
//导入菜单函数
void baocunmenu(void) {
	int num = 0;
	system("cls");
	printf("\n\n\n\n\n");
	printf("\t\t\t\t*****************************************************\n");
	printf("\t\t\t\t**                                                 **\n");
	printf("\t\t\t\t**                      导入                       **\n");
	printf("\t\t\t\t**                                                 **\n");
	printf("\t\t\t\t**        1.重新导入           2.追加导入          **\n");
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
		baocun2(p);
	} else if (num == 2) {
		system("cls");
		baocun1(p);
	} else {
		system("cls");
		printf("输入错误！");
		return;
	}
}
