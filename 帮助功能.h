//帮助提示函数
void tips() {
	int i = 0;
	system("cls");
	printf("********************\n");
	printf("1.“追加导入”可以在商品仓库内继续添加商品信息。\n");
	printf("********************\n");
	printf("2.“重新导入”可以在商品仓库内重新保存商品数据，此时仓库内信息将全部清零,只保存表列内的商品数据。");
	printf("\n********************");
	printf("\n3.“导出”可以导出仓库内商品的所有信息以供编辑，但在信息导出前需先清空表列。");
	printf("\n********************");
	printf("\n4.在退出之前请记得保存，否则仓库将不会录入您所编辑的商品数据。");
	printf("\n\n返回->1\n");
	scanf("%d", &i);
	if (i == 1) {
		system("cls");
		return;
	} else {
		system("cls");
		printf("输入错误");
	}

}
