#include <stdio.h>

int main(void)
{
	int a1, b1, c1, d1, e1, f1;
	printf("�аݤ@��Ѫ��`���{�� : ");
	scanf("%d", &a1);

	printf("�аݨT�o�@����/�[�ڦh�ֿ� : ");
	scanf("%d", &b1);

	printf("�аݥ����@����/�[�گ��p�h�֤��� : ");
	scanf("%d", &c1);

	printf("�аݤ@��Ѫ������O : ");
	scanf("%d", &d1);

	printf("�аݤ@��Ѫ��q��O(�L���O) : ");
	scanf("%d", &e1);

	f1 = d1 + e1 + (b1*(a1 / c1));
	printf("�@�Ѫ���O�� : %d", f1);


	return 0;
}