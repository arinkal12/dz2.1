#include <stdio.h>
int main() {
	int s1, s2, s3, sum;
	printf("Enter grades for 3 exams");
	scanf_s ("%d %d %d", &s1, &s2, &s3);
	sum = s1 + s2 + s3;
	if (sum == 15) {
		printf("\n excellent student");
	}
	else if (sum == 6) {
		printf(" \n good guy");
	}
	else
	{
		printf("\n two - biter");
	}
	return 0;
}