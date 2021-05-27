//#include <stdio.h>
//#include <stdlib.h>
//#include <locale.h>
//
//typedef struct person {
//	unsigned int age;
//	char* name_and_surname;
//}PERSON;
//
//int main() {
//	setlocale(LC_ALL, "RUS");
//	FILE* in;
//	errno_t err = fopen_s(&in, "person.txt", "r");
//	if (err != 0) {
//		_fcloseall();
//		return err;
//	}
//	int n;
//	fscanf_s(in, "%d", &n);
//	PERSON* p = (PERSON*)malloc(n * sizeof(PERSON));
//	for (int i = 0; i < n; ++i) {
//		fscanf_s(in, "%u", &p[i].age);
//		p[i].name_and_surname = (char*)malloc(50);
//		fgets(p[i].name_and_surname, 50, in);
//	}
//	int maxAge = p[0].age, j = 0;
//	for (int i = 1; i < n; ++i) {
//		if (p[i].age > maxAge) {
//			maxAge = p[i].age;
//			j = i;
//		}
//	}
//	printf("%u", p[j].age);
//	printf("%s", p[j].name_and_surname);
//	_fcloseall();
//	return 0;
//}