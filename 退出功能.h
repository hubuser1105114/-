//退出函数
void myexit(struct xinxi *xx,int *n) {
	printf("\a");	printf("\a");
    system("cls");
	printf("\n\n\n\n\n");
	printf("\t\t\t\t*****************************************************\n");
	printf("\t\t\t\t**                                                 **\n");
	printf("\t\t\t\t**                      确认退出？                 **\n");
	printf("\t\t\t\t**                                                 **\n");
	printf("\t\t\t\t**           1.是                      2.否        **\n");
	printf("\t\t\t\t**                                                 **\n");
	printf("\t\t\t\t**                                                 **\n");
	printf("\t\t\t\t**                                                 **\n");
	printf("\t\t\t\t*****************************************************\n");
	printf("\t\t\t\t请输入:");
	scanf("%d",n);
	if(*n==1){
	free(xx);
	xx = NULL;
	system("cls");
	printf("退出成功");
	printf("\n");}
	else if(*n==2){system("cls");return;}
	else{system("cls");printf("输入错误！");return;
	}
}