#include <stdio.h>

int main() {

	int C[5][5] = { 0 };  //C�迭 �ʱ�ȭ
	int V = 1;  //1~25 ���� ���� ����
	int SW = -1;  //����ġ����
	int K = 1;  //�ݺ�Ƚ��
	int i = 2;  //��
	int j = 2;  //��

	C[i][j] = V;  //C[2][2] = 1
	V++;

	while (1) {

		for (int P = 0; P < K; P++) {  //�� ����
			i += SW;
			C[i][j] = V;
			V++;
		}

		SW = (-1) * SW;  //����ġ���� ��ȭ

		for (int P = 0; P < K; P++) {  //�� ����
			j += SW;
			C[i][j] = V;
			V++;
		}

		if (K == 4)  //������ �� ���� �Ѱ��� ���ܵ� ���¿��� break
			break;
		K++;  //�ݺ����� ++

	}

	for (int P = 0; P < K; P++) {  //������ �� �����Ͽ� 4���� �� �־��ֱ�
		i += SW;
		C[i][j] = V;
		V++;
	}

	for (int i = 0; i<5; i++) {  // �迭 ���
		for (int j = 0; j< 5; j++) {
			printf("%d\t", C[i][j]);
		}
		printf("\n\n");
	}

	return 0;
}