#pragma warning(disable:4996) /*visual studio에서 scanf를 함수를 쓸때 나오는 경고를 끔*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>

void clear_input_buffer(void) { /*반환값 없는 함수 매개변수 없음*/
	int c;
	while ((c = getchar()) != '\n' && c != EOF)  /*scanf를 여러번 쓸 때 버퍼에 남아있는 \n같은 것을 청소해서 다음 입력이 꼬이지 않게 만듬*/
	{
		;
	}
}

int main(void)
{
	char str1[100];
	char str2[100];
	char copy[100];
	char sentence[200];
	char temp[200];

	char* pos;
	char ch;

	char* p_str1 = str1;
	char* p_str2 = str2;
	char* p_copy = copy;
	char* p_sentence = sentence;
	char* p_temp = temp;

	printf("Enter first string(no spaces):");
	scanf("%99s", p_str1);

	printf("Enter second string (no spaces): ");
	scanf("%99s", p_str2);

	printf("\n--- Printed strings (using puts)---\n");
	puts(p_str1);
	puts(p_str2);

	printf("\n --- strlen practice---\n"); /* strlen practice을 출력하고 줄을 바꿔라*/
	printf("Length of str1: %zu\n", strlen(p_str1)); /*p_str1이 가리키는 문자열의 길이를 계산하는 함수*/
	printf("Length of str2: %zu\n", strlen(p_str2)); /*p_str2가 가리키는 문자열의 길이를 계산하는 함수*/
	//-> strlen(p_str1) 은 str1안에 들어있는 문자열의 길이를 리턴  

	clear_input_buffer(); /*입력버퍼(키보드 입력 - 버퍼저장 - scanf()소비)란 키보드로 입력하면 값이 바로 변수에 가는것이아닌
	먼저 버퍼(buffer)라는 임시저장공간에 들어간다. 이때 버퍼 안에 남은 문자, 엔터, 공백등이 남아있으면 꼬여버린다. 이러한 불필요한 문자들을 전부제거 (엔터, 공백, 기타쓰레기)*/

	printf("\n Enter one sentence (can include spaces): ");
	fgets(p_sentence, sizeof(sentence), stdin);
	printf("\n You entered (sentence) = ");
	puts(p_sentence);

	printf("\n--- Practice #1: ????????? ---\n");
	strcpy(p_copy, p_str1); /* str1의 문자열을 copy에 그대로 복사*/
	printf("copy="); /*이후 copy=라고 출력*/
	puts(p_copy); /* copy안에 복사된 문자열을 puts로 출력*/
	// -> str1에 문자열을 copy로 복사하고, 복사된 내용을 출력

	printf("\n---Practice #2:????????? ---\n");  /*지금부터 Practice #2를 하는 중이라고 화면에 보여준다*/
	if (strlen(p_str1) + strlen(p_str2) < sizeof(str1)) { /*str의 길이와 str2의 길이를 더했을때 str의 배열 크기를 넘지 않는지 확인한다*/
		strcat(p_str1, p_str2); /*안전하면 str1뒤에 str2를 이어서 붙인다.*/
		printf("After concatenation, str1=");
		puts(p_str1); /*str1의 내용을 출력하고 줄바꿈을 해줌*/
	}
	else {
		printf("str1 buffer is too small; cannot perform strcat!\n"); /*만약 크기가 부족하면 문장을 출력*/
		
		printf("\n--- Practice #3:??????????---\n"); /*지금부터 preactice #3을 연습한다고 화면에 표시*/
		{
			int cmp = strcmp(p_str1, p_str2); /*strcmp(a,b)는 문자열 a와 b를 비교하는 함수*/
			if (cmp == 0) {   /*strcmp(p_str1, p_str2)가 0을 돌려줌 즉 완전히 같은 문자열*/
				printf(" str1 and str2 are equal. \n");
			}
			else if (cmp < 0) {/*cmp가 0보다 작은경우 str1이 str2보다 먼저 나온다.= 더작다는 뜻*/
				printf("In lexicographical order, str1 comes before str2.\n"); 
			}
			else {/*남은 건 cmp > 0인 경우 , str1이 str2보다 사전에서 뒤에 나온다 =  더크다 뒤에있음*/
				printf("In lexicographical order, str1 comes after str2. \n");
			}
		}
		printf("\n---Practice #4:?????????---\n"); /*4번째 연습*/
		printf("\nEnter a character to search for:");/*찾고 싶은 문자 하나를 입력하세요*/
		scanf("%c", &ch); /*문자1개를 입력받기*/
		pos = strchr(p_str1, ch); /*strchr 문자열안에서 c를 처음 발견한 위치를 반환 찾지 못하면 NULL을 반환, p_str1은 str1문자열의 시작 주소 , ch은 찾고 싶은 문자*/
		if (pos != NULL) {/*NULL이 아니면 strchr가 찾았다는 뜻*/
			printf("'%c' is at index %ld (0-based) in str1.\n", ch, (long)(pos - p_str1));  /*ch가 문자열 str1안에서 몇번째 위치인지 출력*/
		}/*pos는 찾은 문자ch가 있는 위치를 가르키는 포인터*/
		else {
			printf("'%c' is not found in str1.\n", ch); /* str1안에서 ch를 찾고 찾으면 위치를 반환, 못찾으면 NULL반환*/
		}
		printf("\n---Practice #5:?????????---\n");
		pos = strstr(p_sentence, p_str2);  /*strstr은 처음 나타나는 위치의 주소  못찾으면 NULL*/
		if (pos != NULL) {
			printf(" Found \"%s\" inside sentence. \n", p_str2);/*찾은 경우*/
			printf("Substring starting from the found position:"); /*문장 안에 그런단어가 없는 경우*/
			puts(pos); /*문자열을 화면에 출력하는 함수*/
		}
		else {
			printf("Could not find \"%s\| in sentence. \n", p_str2);
		}
		printf("\n---Practice #6:?????????? --- \n"); 
		printf("\n---strtok practice: split sentence by spaces---\n"); /* strtok를 이용해서 공백 기준으로 문장을 자를 거야라고 설명해주는 안내 문구 */

		strcpy(p_temp, p_sentence); /* p_sntence 원본 문장, p_temp 문장을 복사해서 조작할 임시 버퍼*/
		char* token = strtok(p_temp, " "); /*p_temp문자열을 "" 공백 기준으로 잘라서 첫번째 토큰을 가리키는 포인터를 token에 저장하라*/
		int i = 1; /*첫 번째 토큰부터 출력*/
		while (token != NULL) { /* 조건 token !=NULL 이며 strtok는 더이상 잘라낼 토큰이 없으면 NULL을 반환*/
			printf("Token %d:", i++);  
			puts(token);/*token이 가리키는 문자열을 출력하고 줄바꿈*/
			token = strtok(NULL, " "); /*두번째 호출부터 첫인자에 null넣기, 이전 문자열의 나머지 부분에서 다음 톸ㄴ 찾기*/
	}
		printf("\nProgram finished.\n");/*프로그램 마침*/
		return 0;
}