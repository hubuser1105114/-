#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>


struct xinxi { //�ṹ��
	char bh[30];//��Ʒ���
	char bhstr[30];//��Ʒ����
	float jinjia;//��Ʒ����
	float shoujia;//��Ʒ�ۼ�
	int kucun;//��Ʒ�������
};

struct goods {
	struct xinxi *xx;
	int size;
	int cap;
};

struct goods sp = {0};
struct goods *p = &sp;
//�ṹ�嶨��

//��ʼ������
void first(struct goods *p) {
	p->xx = (struct xinxi *)malloc(3 * sizeof(struct xinxi));
	if (p->xx == NULL) {
		printf("��ʼ��ʧ��");
		return ;
	}
	p->size = 0;
	p->cap = 3;
}
//���ݺ���
void zengrong(struct goods *p) {
	struct xinxi *p2 = NULL;
	p2 = (struct xinxi *)realloc(p->xx, (p->cap + 2) * sizeof(struct xinxi));
	if (p2 == NULL) {
		printf("����ʧ��");
		return;
	}
	p->xx = p2;
	p2 = NULL;
}
struct xinxi *search(struct goods *p, char arr[]);
void jinhuo1(struct goods *p);
void jinhuo2(struct goods *p);
void tuihuo(struct goods *p);
void xxcx(struct goods *p);
void spxxpx(struct goods *p);
void daochu(struct goods *p);
void easy(struct goods *p);
void modify(struct goods *p);
void spxs(struct goods *p);
void tips();



//��������
struct xinxi *search(struct goods *p, char arr[]) {
	int i = 0;
	if (p->size == 0) {
		return (NULL);
	}
	for (i = 0; i < p->size; i++) {
		if (strcmp(arr, p->xx[i].bh) == 0)
			break;
	}
	if (i == p->size) {
		return (NULL);
	}
	return (&(p->xx[i]));
}


















