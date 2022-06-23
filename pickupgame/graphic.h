#include <stdio.h>
void print1();
void print1() {
	system("cls");
	printf("\n\t\t  忙式式式式式式式式式式式式式式忖\n");
	printf("\t\t  戍式式式式式式式式式式式式式式扣\n");
	printf("\t\t  弛     忙式式忖     弛\n");
	printf("\t\t  弛     戌扛扛戎     弛\n");
	printf("\t\t  弛	         弛\n");
	printf("\t\t  戌式式式式式式式式式式式式式式戎");
}
int printmenu(int ticket);
int printmenu(int ticket) {
	printf("\n\t\t忙式式式式式式式式式式式式式式式式式式忖");
	printf("\n\t\t弛 鉻晦掏 偎熱 : %2d 弛\n", ticket);
	printf("\t\t戍式式式式式式式式式式式式式式式式式式扣\n");
	printf("\t\t弛 1. 橾奩 鉻晦     弛\n\t\t弛 2. 翱樓 鉻晦     弛\n\t\t弛 3. 鉻晦掏 醱瞪   弛\n\t\t弛 4. 嬴檜蠱 �挫�   弛\n\t\t弛 5. 啪歜謙猿      弛\n");
	printf("\t\t戌式式式式式式式式式式式式式式式式式式戎\n");
	printf("\t\t  殮溘 :");
	return ticket;
}
int print2(int result, int ticket);
int print2(int result, int ticket) {
	system("cls");
	printf("\n\t忙式式式式式式式式式式式式式式忖\n");
	printf("\t弛       %d      弛\n", result);
	printf("\t戍式式式式式式式式式式式式式式扣\n");
	printf("\t弛     忙式式忖     弛\n");
	printf("\t弛     戌扛扛戎     弛\n");
	printf("\t弛	       弛\n");
	printf("\t戌式式式式式式式式式式式式式式戎\n");
	printf("\n     忙式式式式式式式式式式式式式式式式式式式式式式忖");
	printf("\n     弛 鉻晦掏 陴擎 偎熱 : %2d弛", ticket);
	printf("\n     戍式式式式式式式式式式式式式式式式式式式式式式扣");
	printf("\n     弛 1. 棻衛 鉻晦         弛");
	printf("\n     弛 2. 斜虜舒晦          弛");
	printf("\n     戌式式式式式式式式式式式式式式式式式式式式式式戎");
	printf("\n       殮溘 : ");
	return result;
}
void print3(int array[]);
void print3(int array[]) {
	system("cls");
	printf("\n\t 忙式式式式式式式式式式式式式式忖\n");
	printf("\t 弛     璽堅     弛\n");
	printf("\t 戍式式式式式式式式式式式式式式扣\n");
	printf("\t 弛     忙式式忖     弛\n");
	printf("\t 弛     戌扛扛戎     弛\n");
	printf("\t 弛	        弛\n");
	printf("\t 戌式式式式式式式式式式式式式式戎\n");
	printf("\n     忙式式式式式式式式式式式式式式式式式式式式式式忖");
	for (int count = 6; count > 1; count--) {
		printf("\n     弛 %d撩.             %2d偃弛", count - 1, array[count - 2]);
	}//嬴檜蠱 薑葬 
	printf("\n     戍式式式式式式式式式式式式式式式式式式式式式式扣");
	printf("\n     弛 1. 璽堅薑葬          弛");
	printf("\n     弛 2. 璽堅釭陛晦        弛");
	printf("\n     戌式式式式式式式式式式式式式式式式式式式式式式戎");
	printf("\n       殮溘 : ");
}
int print4(int result1, int result2, int result3, int ticket);
int print4(int result1, int result2, int result3, int ticket) {
	system("cls");
	printf("\n\t忙式式式式式式式式式式式式式式忖   忙式式式式式式式式式式式式式式忖   忙式式式式式式式式式式式式式式忖\n");
	printf("\t弛       %d      弛   弛       %d      弛   弛       %d      弛\n", result1,result2, result3);
	printf("\t戍式式式式式式式式式式式式式式扣   戍式式式式式式式式式式式式式式扣   戍式式式式式式式式式式式式式式扣\n");
	printf("\t弛     忙式式忖     弛   弛     忙式式忖     弛   弛     忙式式忖     弛\n");
	printf("\t弛     戌扛扛戎     弛   弛     戌扛扛戎     弛   弛     戌扛扛戎     弛\n");
	printf("\t弛	       弛   弛	          弛   弛	             弛\n");
	printf("\t戌式式式式式式式式式式式式式式戎   戌式式式式式式式式式式式式式式戎   戌式式式式式式式式式式式式式式戎\n");
	printf("\n\t\t       忙式式式式式式式式式式式式式式式式式式式式式式忖");
	printf("\n\t\t       弛 鉻晦掏 陴擎 偎熱 : %2d弛", ticket);
	printf("\n\t\t       戍式式式式式式式式式式式式式式式式式式式式式式扣");
	printf("\n\t\t       弛 1. 棻衛 鉻晦         弛");
	printf("\n\t\t       弛 2. 斜虜舒晦          弛");
	printf("\n\t\t       戌式式式式式式式式式式式式式式式式式式式式式式戎");
	printf("\n\t\t         殮溘 : ");
	return result1, result2, result3, ticket;
}
void print5(int array[]);
void print5(int array[]) {
	system("cls");
	printf("\n\t 忙式式式式式式式式式式式式式式忖\n");
	printf("\t 弛     璽堅     弛\n");
	printf("\t 戍式式式式式式式式式式式式式式扣\n");
	printf("\t 弛     忙式式忖     弛\n");
	printf("\t 弛     戌扛扛戎     弛\n");
	printf("\t 弛	        弛\n");
	printf("\t 戌式式式式式式式式式式式式式式戎\n");
	printf("\n     忙式式式式式式式式式式式式式式式式式式式式式式忖");
	for (int count = 6; count > 1; count--) {
		printf("\n     弛 %d撩.             %2d偃弛", count - 1, array[count - 2]);
	}//嬴檜蠱 薑葬 
	printf("\n     戍式式式式式式式式式式式式式式式式式式式式式式扣");
	printf("\n     弛 薑葬 ж堅 談擎 ヶ晝擊弛");
	printf("\n     弛 殮溘ж衛晦 夥奧棲棻. 弛");
	printf("\n     弛 釭陛晦 : 0           弛");
	printf("\n     戌式式式式式式式式式式式式式式式式式式式式式式戎");
	printf("\n       殮溘 : ");
}
int print6(int array[] ,int su1);
int print6(int array[] ,int su1) {
	system("cls");
	printf("\n\t 忙式式式式式式式式式式式式式式忖\n");
	printf("\t 弛     璽堅     弛\n");
	printf("\t 戍式式式式式式式式式式式式式式扣\n");
	printf("\t 弛     忙式式忖     弛\n");
	printf("\t 弛     戌扛扛戎     弛\n");
	printf("\t 弛	        弛\n");
	printf("\t 戌式式式式式式式式式式式式式式戎\n");
	printf("\n     忙式式式式式式式式式式式式式式式式式式式式式式忖");
	for (int count = 6; count > 1; count--) {
		printf("\n     弛 %d撩.             %2d偃弛", count - 1, array[count - 2]);
	}//嬴檜蠱 薑葬 
	printf("\n     戍式式式式式式式式式式式式式式式式式式式式式式扣");
	printf("\n     弛 %d撩 濰綠 曖 偎熱蒂   弛",su1);
	printf("\n     弛 殮溘ж衛晦 夥奧棲棻. 弛");
	printf("\n     弛 釭陛晦 : 0           弛");
	printf("\n     戌式式式式式式式式式式式式式式式式式式式式式式戎");
	printf("\n       殮溘 : ");
	return array, su1;
}

