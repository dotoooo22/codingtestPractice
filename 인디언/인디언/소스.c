//인디언식 이름 만들기

#include <stdio.h>

int main(void) {
	char name1[][20] = { "시끄러운(말 많은)","푸른","어두운(적색)",
	"조용한","웅크린","백색","지혜로운","용감한","날카로운","욕심많은" };
	char name2[][6] = { "","늑대","태양","양","매","황소","불꽃","나무",
	"달빛","말","돼지","하늘","바람" };
	char name3[][30] = { "","와(과) 함께춤을","의 기상","은(는)그림자속에",
	"","","","의 환생","의 죽음","아래에서","을(를)보라","이(가)노래하다",
	"의 그늘(그림자)","의 일격","에게 쫓기는 남자","의 행진","의 왕","의 유령",
	"을 죽인자","은(는) 맨날 잠잔다.","처럼..","의 고향","의 전사","은(는)나의친구",
	"의 노래","의 정령","의 파수꾼","의 악마","와(과) 같은 사나이",
	"의 심판을(를) 쓰러뜨린자","의 혼","은(는) 말이없다." };
	char string1[56];
	int n;
	int n1, n2, n3;
	printf("생년월일 입력(yyyymmdd:20190728) : ");
	scanf("%d", &n);

	printf("%d : ", n);

	n1 = ((n / 10000) % 10);
	printf("%s", name1[n1]);
	n2 = ((n % 10000) / 100);
	printf("%s", name2[n2]);
	n3 = ((n % 100));
	printf("%s", name3[n3]);


	return 0;
}