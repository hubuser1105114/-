//�޸ĺ���
void modify(struct goods *p) {
	int num = 0;
	char arr[30] = {0};
	printf("����������Ҫ�޸ĵ���Ʒ����Ʒ��ţ�\n");
	scanf("%s", arr);
	struct xinxi *ps = search(p, arr);
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
	if (ps == NULL) {
		system("cls");
		printf("û�м������κ������Ʒ");
		return;
	} else {
		system("cls");
		printf("�����ɹ�\n");
		Sleep(1250);
		system("cls");
		printf("��Ʒ���\t��Ʒ����\t��Ʒ����\t��Ʒ�ۼ�\t��Ʒ�������\n");
		printf("%s\t        %s\t        %.3f\t        %.3f\t         %d\n",  ps->bh,  ps->bhstr,
		       ps->jinjia,  ps->shoujia,  ps->kucun);
		printf("\n�����޸�?\n��Ʒ���->1   ��Ʒ����->2   ��Ʒ����->3   ��Ʒ�ۼ�->4   ��Ʒ���->5\n");
		scanf("%d", &num);
		if (num == 1) {
			printf("���޸ģ�\n");
			scanf("%s", ps->bh);
			system("cls");
			printf("�޸ĳɹ�");
			return;
		} else if (num == 2) {
			printf("���޸ģ�\n");
			scanf("%s", ps->bhstr);
			system("cls");
			printf("�޸ĳɹ�");
			return;
		} else if (num == 3) {
			printf("���޸ģ�\n");
			scanf("%f", &(ps->jinjia));
			system("cls");
			printf("�޸ĳɹ�");
			return;
		} else if (num == 4) {
			printf("���޸ģ�\n");
			scanf("%f", &(ps->shoujia));
			system("cls");
			printf("�޸ĳɹ�");
			return;
		} else if (num == 5) {
			printf("���޸ģ�\n");
			scanf("%d", &(ps->kucun));
			system("cls");
			printf("�޸ĳɹ�");
			return;
		} else {
			system("cls");
			printf("�������!");
			return;
		}
		system("cls");
		printf("�޸ĳɹ�");

	}
}

