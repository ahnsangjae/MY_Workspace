/*
일정한 수평 범위에서 문자열을 오른쪽으로 스크롤하되 범위의 끝에 이르면 앞쪽으로 회전하면서 스크롤한다. 
범위와 스크롤될 문자열은 변경하기 쉽도록 작성하되 범위에서 끝 좌표는 제외하는 것이 논리상 합당하다. 
예를 들어 10~30사이를 스크롤한다면 실제 문자열이 찍히는 마지막 좌표는 29여야 한다. 
부드러운 스크롤을 위해 clrscr 함수는 호출하지 말아야 하며 꼭 필요한 부분만 삭제하도록 한다. 
다 작성했으면 왼쪽으로도 스크롤시켜 보도록 하자.
*/

#include "rotate.h"

void main()
{
	char astr[] = { 0 };
	char *str1 = astr;
	char *str2 = astr;
	int start = 10, end = 30;

	str1 = init_array(start, end, str1, "123456789");
	str2 = init_array(start, end, str2, "123456789");

	for (clrscr(); !_kbhit(); delay(100))
	{
		R_move(start, end, str2);
		L_move(start, end, str1);
	}
}