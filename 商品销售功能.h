//��Ʒ���ۺ���
void spxs(struct goods *p) {
	int j = 0;
	int num = 0;
	char aim[] = {0};
	printf("����������Ҫ���۵���Ʒ��ţ�\n");
	scanf("%s", aim);
	struct xinxi *p1 = search(p, aim);
	if (p1 == NULL) {
		system("cls");
		printf("����û�����������۵���Ʒ");
		return;
	}
	system("cls");
	printf("��Ʒ���\t��Ʒ����\t��Ʒ����\t��Ʒ�ۼ�\t��Ʒ�������\n");
	printf("%s\t        %s\t        %.3f\t        %.3f\t         %d\n",  p1->bh,  p1->bhstr,
	       p1->jinjia,  p1->shoujia,  p1->kucun);
	printf("\nȷ�����ۣ�\n��->1   ��->2\n");
	scanf("%d", &j);
	printf("\n");
	system("cls");
	if (j == 1) {
		printf("����������Ҫ���۵�������\n");
		scanf("%d", &num);
		if (num > p1->kucun) {
			printf("��Ʒ��治��,�޷�����");
			return;
		} else {
			p1->kucun = p1->kucun - num;
			printf("\n���۳ɹ�");
		}

	} else if (j == 2) {
		return;
	} else {
		printf("�������");
		return;
	}
}
