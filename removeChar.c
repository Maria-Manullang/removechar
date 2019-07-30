#include<stdio.h>
#define N 255

void removeChar(char *, char ); 			//perkenalan fungsi yang akan dipakai

int main(){
	char data[N], find;								//deklarasi variabel

   	printf("Masukkan sebuah string: ");			//input string
    scanf("%[^\n]", data);

//remove_char
     printf("> Karakter yang dihilangkan: ");		//karakter yang dihilangkan
     getchar();										//fungsi yang menangkap 1 huruf yang akan dihilangkan
	 scanf("%c", &find);

  removeChar(data,find);							//pemanggilan fungsi hapus karakter
  printf("\nHasil removeChar: %s\n\n", data);		//cetak hasil kalimat setelah pemanggilan fungsi
return 0;
}

//remove_char
void removeChar(char *str, char garbage) {

    char *src, *dst;							//deklarasi variabel

    for (src = dst = str; *src != '\0'; src++) {
        *dst = *src;

        if (*dst != garbage) dst++;
    }
    *dst = '\0';
}
