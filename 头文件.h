#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>


struct xinxi { //结构体
	char bh[30];//商品编号
	char bhstr[30];//商品名称
	float jinjia;//商品进价
	float shoujia;//商品售价
	int kucun;//商品库存数量
};

struct goods {
	struct xinxi *xx;
	int size;
	int cap;
};

struct goods sp = {0};
struct goods *p = &sp;
//结构体定义

//初始化函数
void first(struct goods *p) {
	p->xx = (struct xinxi *)malloc(3 * sizeof(struct xinxi));
	if (p->xx == NULL) {
		printf("初始化失败");
		return ;
	}
	p->size = 0;
	p->cap = 3;
}
//增容函数
void zengrong(struct goods *p) {
	struct xinxi *p2 = NULL;
	p2 = (struct xinxi *)realloc(p->xx, (p->cap + 2) * sizeof(struct xinxi));
	if (p2 == NULL) {
		printf("增容失败");
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



//搜索函数
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


















