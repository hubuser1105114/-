//��պ���
void easy(struct goods *p) {
	int n = 0;
	printf("ȷ�������Ʒ���У�\n��->1  ��->2\n");
	scanf("%d", &n);
	if (n == 2) {
		system("cls");
		return;
	} else	if (n == 1) {
		free(p->xx);
		p->xx = NULL;
		first(p);
		system("cls");
		printf("��ճɹ�");
	} else {
		system("cls");
		printf("�������!");
		return;
	}
}