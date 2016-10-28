#include <stdio.h>
#include <string.h>

	char alfabe[23] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'r', 's', 't', 'u', 'v', 'y', 'z'};

	char str[100], hashSet[100];
	int kaydir = 0;

int sifrele(){

	for(int i = 0; i<sizeof(str); i++){
		for(int j = 0; j<23; j++){
			if(str[i] == alfabe[j]){
				if(j+kaydir > 22){
					hashSet[i] = alfabe[(j + kaydir) - 23];
				}else{
					hashSet[i] = alfabe[j+kaydir];
				}
				break;
			}else if(str[i] == ' '){
				hashSet[i] = ' ';
				break;
			}
		}
	}

	printf("%s\n",hashSet);

	return 0;
}

int coz(){

	for(int i = 0; i<sizeof(str); i++){
		for(int j = 0; j<23; j++){
			if(str[i] == alfabe[j]){
				if(j-kaydir < 0){
					hashSet[i] = alfabe[23 + (j - kaydir)];
				}else{
					hashSet[i] = alfabe[j - kaydir];
				}
				break;
			}else if(str[i] == ' '){
				hashSet[i] = ' ';
				break;
			}
		}
	}

	printf("%s\n",hashSet);

	return 0;
}

int main(){

	int islem = 1;

	printf("string -> ");
	scanf("%[^\n]s", str);

	printf("Islem 1 sifrele - 2 coz ->");
	scanf("%d",&islem);

	printf("kaydir -> ");
	scanf("%d", &kaydir);

	if(islem == 1)
		sifrele();
	else if(islem == 2)
		coz();
	else
		printf("Gecersiz..\n");
}
