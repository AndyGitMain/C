#include <stdio.h>
#include <stdio_ext.h>

struct USERDATA {
	unsigned int nAge;
	char szName[12];
	char szPhone[12];
	char sex;
};

void getUserData(struct USERDATA *pUser)
{
	FILE *fp = stdin;
	printf("Input age : ");
	scanf("%d", &pUser->nAge);
	printf("Input name : ");
	scanf("%s", pUser->szName);
	//fgets(pUser->szName, sizeof(pUser->szName), fp);
	printf("Input phone : ");
	scanf("%s", pUser->szPhone);
	//fgets(pUser->szPhone, sizeof(pUser->szPhone), fp);
	__fpurge(fp);
	printf("Input sex (M or F) : ");
	scanf("%c", &pUser->sex);
}

int main(void)
{
	struct USERDATA user;
	getUserData(&user);
	printf("Age : %d\nName : %s\nPhone : %s\nSex : %c\n",
		   user.nAge, user.szName, user.szPhone, user.sex);
	return 0;
}




