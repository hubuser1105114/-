#include "头文件.h"
#include <stdio.h>
#include "菜单功能.h"
#include "信息查询功能.h"
#include "信息浏览功能.h"
#include "进货功能.h"
#include "退货功能.h"
#include "退出功能.h"
#include "导出功能.h"
#include "导入功能.h"
#include "清空功能.h"
#include "商品销售功能.h"
#include "修改功能.h"
#include "帮助功能.h"


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
	    if(i!=0){system("cls");printf("\a");printf("输入错误！");continue;}
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
				printf("输入错误!");
				printf("\a");
				break;
		}
	} while (num != 1);
}