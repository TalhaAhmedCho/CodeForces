#include <stdio.h>

int main() {

  int number;
  scanf("%d", &number);

  char word[100];
  for(int i = 0; i < number; i++){
    scanf("%s", word);
    int len = 0;
    while(word[len] != '\0'){
        len++;
    }

    if(len > 10){
        printf("%c%d%c\n", word[0], len - 2, word[len - 1]);
    } else{
        printf("%s\n", word);
    }
  }


  return 0;
}