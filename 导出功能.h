//��������
void daochu(struct goods *p) {
	int i = 0;
	printf("���ڵ���������Ʒ��Ϣ...");
	Sleep(750);
	if (p->size != 0) {
		system("cls");
		printf("��������Ȼ������Ʒ��Ϣ�������˻�������");
		return;
	} else {
		FILE *p1 = fopen("��Ʒ�ռǱ�", "r+");//C:\\Users\\lenovo\\Desktop\\�γ����\\.txt
		if (p1 == NULL) {
			printf("����ʧ��");
			return;
		}
		char ch = fgetc(p1);
		if (ch == EOF) {
			system("cls");
			printf("����Ϊ��");
			return;
		}
		for (i = 0;; i++) {
			if (feof(p1) != 0) {
				break;
			}
			fscanf(p1, "%s\n%s\n%f\n%f\n%d\n\n\n", p->xx[i].bh, p->xx[i].bhstr, &(p->xx[i].jinjia), &(p->xx[i].shoujia),
			       &(p->xx[i].kucun));
			p->size++;
			if (p->size == p->cap) {
				zengrong(p);
				p->cap = p->cap + 2;
			}
		}
		system("cls");
		printf("�����ɹ�");
		fclose(p1);
		p1 = NULL;
	}
}