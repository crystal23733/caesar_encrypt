#include <stdio.h>
#include <string.h>

#define SHIFT 3

char encrypt(char enc);

int main(void) {
  char str[100];
  printf("해독할 암호를 입력해주세요:");
  fgets(str, sizeof(str), stdin);
  str[strcspn(str, "\n")] = '\0';
  for (int i = 0; str[i] != '\0'; i++) {
    printf("%c", encrypt(str[i]));
  }
  printf("\n");
  return 0;
}

char encrypt(char enc) {
  if (enc >= 'A' && enc <= 'Z') {
    return ((enc - 'A' - SHIFT) % 26 + 'A');
  } else if (enc >= 'a' && enc <= 'z') {
    return ((enc - 'a' - SHIFT) % 26 + 'a');
  } else {
    return enc;
  }
}
