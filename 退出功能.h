//�˳�����
void myexit(struct xinxi *xx,int *n) {
	printf("\a");	printf("\a");
    system("cls");
	printf("\n\n\n\n\n");
	printf("\t\t\t\t*****************************************************\n");
	printf("\t\t\t\t**                                                 **\n");
	printf("\t\t\t\t**                      ȷ���˳���                 **\n");
	printf("\t\t\t\t**                                                 **\n");
	printf("\t\t\t\t**           1.��                      2.��        **\n");
	printf("\t\t\t\t**                                                 **\n");
	printf("\t\t\t\t**                                                 **\n");
	printf("\t\t\t\t**                                                 **\n");
	printf("\t\t\t\t*****************************************************\n");
	printf("\t\t\t\t������:");
	scanf("%d",n);
	if(*n==1){
	free(xx);
	xx = NULL;
	system("cls");
	printf("�˳��ɹ�");
	printf("\n");}
	else if(*n==2){system("cls");return;}
	else{system("cls");printf("�������");return;
	}
}