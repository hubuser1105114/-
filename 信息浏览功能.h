//��Ϣ�������
void spxxpx(struct goods *p) {
	int i = 0;
	if (p->size == 0) {
		system("cls");
		printf("����Ʒ��Ϣ");
	} else {
		system("cls");
		printf("\t��Ʒ���\t��Ʒ����\t��Ʒ����\t��Ʒ�ۼ�\t��Ʒ�������\n");
		for ( i = 0; i < (p->size); i++) {
			printf("\t%s\t        %s\t        %.3f\t        %.3f\t         %d",   p->xx[i].bh,  p->xx[i].bhstr,
			       p->xx[i].jinjia,  p->xx[i].shoujia,  p->xx[i].kucun);

			printf("\n");
		}
	}
}
