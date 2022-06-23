#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#include <time.h>
#include "graphic.h"
#include "check.h"

int main()

{	char go[20]; //진행1
	int result1; //아이템 결과
	int result2; //아이템 결과
	int result3; //아이템 결과
	int item[5] = { 0, }; //품급 아이템 저장소
	int ticket = 10; //뽑기권 기본걧수
	int gogo;//진행2
	int save1;//진행3

	srand((unsigned)time(NULL));

	while (1){
		print1();
		printmenu(ticket);
		scanf_s("%s", &go, 20);
		gogo = atoi(go);
		if (gogo <= 0 || gogo > 5){
			continue;
		}
		else if (gogo == 1 || gogo == 2){
			if (ticket <= 0 || ticket <= 2){
				continue;
			}
		}
		system("cls");
		switch (gogo){
			case 1:{
				while (1){
					ticket = ticket - 1;
					result1 = pickup(result1 = (rand() % 100) + 1);
					save(item,result1);

					while (1){
						print2(result1, ticket);
						scanf_s("%s", &go, 20);
						gogo = atoi(go);
						if (gogo == 1){
							if (ticket <= 0){
								break;
							}
						}
						else if (gogo <= 0 || gogo > 2){
							continue;
						}
						break;
					}//뽑기진행 여부
					if (gogo == 2 || ticket <= 0){
						break;
					}
					else if (gogo == 1 && ticket >= 1){
						continue;
					}
				}//일반 뽑기
				break;
			}//일반 뽑기
		case 2:{
			if (gogo == 1 && ticket >= 3) {
				break;
			}
			while (1){
				ticket = ticket - 3;
				result1 = pickup(result1 = (rand() % 100));
				save(item, result1);
				result2 = pickup(result2 = (rand() % 100));
				save(item, result2);
				result3 = pickup(result3 = (rand() % 100));
				save(item, result3);
				system("cls");

				while (1){
					print4(result1, result2, result3, ticket);
					scanf_s("%s", &go, 20);
					gogo = atoi(go);
					if (gogo <= 0 || gogo > 2){
						continue;
					}
					break;
				}//연속뽑기 진행	
				if (gogo == 2){
					break;
				}
				else if (gogo == 1 && ticket <= 1){
					break;
				}
				else if (gogo == 1 && ticket >= 3) {
					continue;
				}
			}
			break;
		}//연속 뽑기
		case 3:{
			ticket = 10;
			continue;
		}//뽑기권 충전
		case 4:{
			while (1){
				print3(item);
				scanf_s("%s", &go, 20);
				gogo = atoi(go);
				if (gogo <= 0 || gogo > 2){
					continue;
				}
				else if (gogo == 1){
					while (1) {
						print5(item);
						scanf_s("%s", &go, 20);
						gogo = atoi(go);
						if (gogo > 5 || gogo < 0) {
							continue;
						}
						else if (gogo == 0) {
							break;
						}
						else if (item[gogo - 1] == 0) {
							continue;
						}
						save1 = gogo;
						while (1) {
							print6(item, save1);
							scanf_s("%s", &go, 20);
							gogo = atoi(go);
							if (0 == elimination(item,gogo,save1)) {
								continue;
							}
							break;
						}
					}//창고정리
					continue;
				}//창고정리
				break;
			}//창고정리및 대기
			continue;
		}//아이템 확인
		case 5:{
			return 0;
		}//게임 종료
		}//뽑기중
	}//뽑기선택
	return 0;
}
