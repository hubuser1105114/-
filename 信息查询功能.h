//��Ϣ��ѯ����
void xxcx(struct goods *p) {
	char arr[20] = {0};
	int i = 0;
	printf("����������Ҫ��ѯ����Ʒ���:\n");
	scanf("%s", arr);
	struct xinxi *ps = search(p, arr);
	Sleep(100);
	system("cls");
	printf("��ѯ��");
	Sleep(250);
	system("cls");
	printf("��ѯ��.");
	Sleep(250);
	system("cls");
	printf("��ѯ��..");
	Sleep(250);
	system("cls");
	printf("��ѯ��...");
	Sleep(250);
	system("cls");
	if (ps == NULL) {
		system("cls");
		printf("û�в�ѯ���κ������Ʒ");
		return;
	} else {
		system("cls");
		printf("��ѯ�ɹ�\n");
		Sleep(1500);
		system("cls");
		printf("��Ʒ���\t��Ʒ����\t��Ʒ����\t��Ʒ�ۼ�\t��Ʒ�������\n");
		printf("%s\t        %s\t        %.3f\t        %.3f\t         %d",   ps->bh,  ps->bhstr,
		       ps->jinjia, ps->shoujia, ps->kucun);
	}
}
