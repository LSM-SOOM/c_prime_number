#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main(void) {
	int column = 0;
	int inputValue; // �Է� ���� ��
	int stepValue; // �ܰ躰 ������ �� 
	int incValue; // �����ӳѹ��� Ȯ���ϱ� ���� ������

	// 2�̻��� ������ �Է� �޴´�.
	printf("2�̻��� ������ �Է� : ");
	scanf("%d", &inputValue);
	// 2���� 1�� �����ϸ鼭 �Է� ���� ������ ���� �� �����ϴ� ����
		for (stepValue = 2; stepValue <= inputValue; stepValue++) {
		// ���� �ȿ�����
	// ������ ���� 1�� ������ �ڽ��� ������ 1�� �����ϸ鼭 ������� �������� 0�̻��̸� ��� �ݺ�. 0�̸� pn�� �ƴ�
		for (incValue = 2; incValue < stepValue; incValue++) {
			if (stepValue % incValue == 0) {
				break; // if�� ���� ������ incv�� stepv�� ������ ����
			} // incv�� 8�� ��ä�� ��������. ��������� ���� ���� ��

		}
		//�������� �������� 0���� �������� ���� ���� pn���� �����Ͽ� ȭ�鿡 ǥ���Ѵ�
		if (incValue == stepValue) {
			printf("%5d", stepValue); // 5d�� �ټ�ĭ, p�� ����Ʈ �ϰ�
			column++;
			//ȭ�鿡 ǥ�õ� �� 5���� �Ѿ�� �ٹٲ��� �����Ѵ�.
			if (column == 5) {
				column = 0;
				printf("\n"); 
			}

		}
	}
	//�Լ� �տ� int�� return 0 �־��ָ� ����
		//void�� �ȳ־��
		//�ٸ� ���α׷����� ȣ�� �ÿ��� return 0 �Ǵ� 1�� �־��ִ� ������
		//exe���� ���� dinamic link library DLL -
		// main.c�� *.DLL�� ȣ���ϰ� main.c���� ȣ���ϴ� ���� �ҷ��� �־���

}