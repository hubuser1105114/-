//���µ��뺯��
void baocun2(struct goods *p) {
	int j = 0;
	printf("ȷ�����µ��룿\n��->1   ��->2\n");
	scanf("%d", &j);
	if (j == 1) {
		Sleep(100);
		system("cls");
		printf("������");
		Sleep(250);
		system("cls");
		printf("������.");
		Sleep(250);
		system("cls");
		printf("������..");
		Sleep(250);
		system("cls");
		printf("������...");
		Sleep(250);
		system("cls");
		if (p->size == 0) {
			printf("����Ʒ��Ϣ�����µ���ʧ��");
			return;
		}
		FILE *p1 = fopen("��Ʒ�ռǱ�", "w");//C:\\Users\\lenovo\\Desktop\\�γ����\\.txt
		if (p1 == NULL) {
			printf("���ļ�ʧ��");
			exit(0);
		}
		for (int i = 0; i < p->size; i++) {
			fprintf(p1, "%s\n", p->xx[i].bh);
			fprintf(p1, "%s\n", p->xx[i].bhstr);
			fprintf(p1, "%.2f\n", p->xx[i].jinjia);
			fprintf(p1, "%.2f\n", p->xx[i].shoujia);
			fprintf(p1, "%d\n\n\n", p->xx[i].kucun);
		}
		printf("����ɹ�");
		fclose(p1);
		p1 = NULL;
	} else if (j == 2) {
		system("cls");
		return;
	} else {
		system("cls");
		printf("�������");
		return;
	}
}
//׷�ӵ��뺯��
void baocun1(struct goods *p) {
	int i = 0;
	printf("ȷ��׷�ӵ��룿\n��->1   ��->2\n");
	scanf("%d", &i);

	if (i == 2)
		return;
	else	if (i == 1) {
		Sleep(100);
		system("cls");
		printf("������");
		Sleep(250);
		system("cls");
		printf("������.");
		Sleep(250);
		system("cls");
		printf("������..");
		Sleep(250);
		system("cls");
		printf("������...");
		Sleep(250);
		system("cls");
		if (p->size == 0) {
			printf("����Ʒ��Ϣ��׷�ӵ���ʧ��");
			return;
		} else {
			FILE *p2 = fopen("��Ʒ�ռǱ�", "a");//C:\\Users\\lenovo\\Desktop\\�γ����\\.txt
			if (p2 == NULL) {
				printf("���ļ�ʧ��");
				exit(0);
			}
			for (int j = 0; j < p->size; j++) {
				fprintf(p2, "%s\n", p->xx[j].bh);
				fprintf(p2, "%s\n", p->xx[j].bhstr);
				fprintf(p2, "%.2f\n", p->xx[j].jinjia);
				fprintf(p2, "%.2f\n", p->xx[j].shoujia);
				fprintf(p2, "%d\n\n\n", p->xx[j].kucun);
			}
			printf("����ɹ�");
			fclose(p2);
			p2 = NULL;
		}
	} else {
		system("cls");
		printf("�������!");
		return;
	}
}
//����˵�����
void baocunmenu(void) {
	int num = 0;
	system("cls");
	printf("\n\n\n\n\n");
	printf("\t\t\t\t*****************************************************\n");
	printf("\t\t\t\t**                                                 **\n");
	printf("\t\t\t\t**                      ����                       **\n");
	printf("\t\t\t\t**                                                 **\n");
	printf("\t\t\t\t**        1.���µ���           2.׷�ӵ���          **\n");
	printf("\t\t\t\t**                                                 **\n");
	printf("\t\t\t\t**        0.�������˵�                             **\n");
	printf("\t\t\t\t**                                                 **\n");
	printf("\t\t\t\t*****************************************************\n");
	printf("\t\t\t\t������:");
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
		printf("�������");
		return;
	}
}
