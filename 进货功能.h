//�����˵�����
void jinhuomenu(void) {
	int num = 0;
	system("cls");
	printf("\n\n\n\n\n");
	printf("\t\t\t\t*****************************************************\n");
	printf("\t\t\t\t**                                                 **\n");
	printf("\t\t\t\t**                      ����                       **\n");
	printf("\t\t\t\t**                                                 **\n");
	printf("\t\t\t\t**        1.��������Ʒ         2.����ԭ����Ʒ      **\n");
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
		jinhuo1(p);
	} else if (num == 2) {
		system("cls");
		jinhuo2(p);
	} else {
		system("cls");
		printf("�������");
		return;
	}
}

//��������1(�����»���)
void jinhuo1(struct goods *p) {
	if ((p->cap) == (p->size)) {
		printf("��������,���Ժ�\n");
		Sleep(500);
		system("cls");
		zengrong(p);
		printf("���ݳɹ�\n");
		p->cap = p->cap + 2;
	}
	printf("��������Ʒ�������Ϣ:\n");
	printf("��Ʒ���(����-1��ǿ���˳�)��\n");
	scanf("%s", p->xx[p->size].bh);
	if(strcmp(p->xx[p->size].bh,"-1")==0){system("cls");return;}
	int i=0;
	if(p->size!=0)
	{ for(i=0;i<p->size;i++)
	  if(strcmp(p->xx[p->size].bh,p->xx[i].bh)==0)break;
	  if(i!=p->size)
	  {system("cls");printf("�������Ʒ����ظ���");return;
	  }
	}
	printf("��Ʒ���ƣ�\n");
	scanf("%s",  p->xx[p->size].bhstr);
	printf("��Ʒ���ۣ�\n");
	scanf("%f", &( p->xx[p->size].jinjia));

	printf("��Ʒ�ۼۣ�\n");
	scanf("%f", &( p->xx[p->size].shoujia));
	printf("��Ʒ��棺\n");
	scanf("%d", &( p->xx[p->size].kucun));
	p->size = p->size + 1;
	system("cls");
	printf("�����ɹ�");
}
//����2���ܺ���������ԭ�л��
void jinhuo2(struct goods *p) {
	char arr[30] = {0};
	printf("���������빺������Ʒ����Ʒ��ţ�\n");
	scanf("%s", arr);
	struct xinxi *ps = search(p, arr);
	if (ps == NULL) {
		system("cls");
		printf("����û�в�ѯ���κ������Ʒ");
		return;
	} else {
		system("cls");
		printf("��Ʒ���\t��Ʒ����\t��Ʒ����\t��Ʒ�ۼ�\t��Ʒ�������\n");
		printf("%s\t        %s\t        %.3f\t        %.3f\t         %d",   ps->bh,  ps->bhstr,
		       ps->jinjia, ps->shoujia, ps->kucun);
		printf("\n����������Ҫ����������(����0���˳�)��\n");
		int i = 0;
		scanf("%d", &i);
		if (i < 0) {
			system("cls");
			printf("�������");
			return;
		}
		if (i > 0) {
			system("cls");
			printf("�����ɹ�!");
			ps->kucun += i;
			return;
		}
		if(i==0){system("cls");return;}
	}
}
