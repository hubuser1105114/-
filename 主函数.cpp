#include "ͷ�ļ�.h"
#include <stdio.h>
#include "�˵�����.h"
#include "��Ϣ��ѯ����.h"
#include "��Ϣ�������.h"
#include "��������.h"
#include "�˻�����.h"
#include "�˳�����.h"
#include "��������.h"
#include "���빦��.h"
#include "��չ���.h"
#include "��Ʒ���۹���.h"
#include "�޸Ĺ���.h"
#include "��������.h"


int main() {
   
	char input=0;
    char ch;
   
	int num = 2;
	first(p);
	do {   int i=0;
	      fflush(stdin);
		  gongneng();
	    input=getchar();
        while((ch=getchar())!='\n'){i++;}
	    fflush(stdin);
	    if(i!=0){system("cls");printf("\a");printf("�������");continue;}
		switch (input) {
			case  '1':
				jinhuomenu();
				break;
			case '2':
				tuihuo(p);
				break;
			case '3':

				spxs(p);
				break;
			case '4':

				xxcx(p);
				break;
			case '5':   

				spxxpx(p);
				break;
			case '6':
				baocunmenu();
				break;
			case '7':
				modify(p);
				break;
			case '8':
				daochu(p);
				break;
			case '9':
				easy(p);
				break;
			case '!':
				tips();
				break;
			case '0':
				myexit(p->xx, &num);
				break;
			default:
				system("cls");
				printf("�������!");
				printf("\a");
				break;
		}
	} while (num != 1);
}