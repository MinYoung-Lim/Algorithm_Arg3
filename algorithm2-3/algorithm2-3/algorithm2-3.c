#include <stdio.h>

int main() {

	int C[5][5] = { 0 };  //C배열 초기화
	int V = 1;  //1~25 숫자 담을 변수
	int SW = -1;  //스위치변수
	int K = 1;  //반복횟수
	int i = 2;  //행
	int j = 2;  //열

	C[i][j] = V;  //C[2][2] = 1
	V++;

	while (1) {

		for (int P = 0; P < K; P++) {  //열 고정
			i += SW;
			C[i][j] = V;
			V++;
		}

		SW = (-1) * SW;  //스위치변수 변화

		for (int P = 0; P < K; P++) {  //행 고정
			j += SW;
			C[i][j] = V;
			V++;
		}

		if (K == 4)  //마지막 행 감소 한개를 남겨둔 상태에서 break
			break;
		K++;  //반복변수 ++

	}

	for (int P = 0; P < K; P++) {  //마지막 행 감소하여 4개의 값 넣어주기
		i += SW;
		C[i][j] = V;
		V++;
	}

	for (int i = 0; i<5; i++) {  // 배열 출력
		for (int j = 0; j< 5; j++) {
			printf("%d\t", C[i][j]);
		}
		printf("\n\n");
	}

	return 0;
}