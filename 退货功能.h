//�˻����ܺ���
void tuihuo(struct goods *p) {
	char tui[20] = {0};
	int j = 0;
	printf("�����������˵Ļ�Ʒ����Ʒ��ţ�\n");
	scanf("%s", tui);
	struct xinxi *p1 = search(p, tui);
	if (p1 == NULL) {
		system("cls");
		printf("û�д���Ʒ");
		return;
	}
	system("cls");
	printf("��Ʒ���\t��Ʒ����\t��Ʒ����\t��Ʒ�ۼ�\t��Ʒ�������\n");
	printf("%s\t        %s\t        %.3f\t        %.3f\t         %d\n",  p1->bh,  p1->bhstr,
	       p1->jinjia,  p1->shoujia,  p1->kucun);
	printf("ȷ���˻���\n��->1   ��->2\n");
	scanf("%d", &j);
	if (j == 1) {
		if (p->size == 1) {
			p->size--;
		} else {
			strncpy(p1->bh, p->xx[p->size - 1].bh, 30);
			strncpy(p1->bhstr, p->xx[p->size - 1].bhstr, 30);
			p1->jinjia = p->xx[p->size - 1].jinjia;
			p1->shoujia = p->xx[p->size - 1].shoujia;
			p1->kucun = p->xx[p->size - 1].kucun;
			p->size--;
		}
		printf("�˻��ɹ�");
		return;
	} else if (j == 2) {
		return;
	} else {
		system("cls");
		printf("�������");
		printf("\a");
	}
}
