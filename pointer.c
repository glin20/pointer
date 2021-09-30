#include <stdio.h>
int main(){
  char c = 'c';
  int i = 200;
  long l = 100.0;

  printf("&c hex : %p\t &i hex : %p\t &l hex : %p\t\n", &c, &i, &l);
  printf("&c decimal : %lu\t &i decimal : %lu\t &l decimal : %lu\t\n", &c, &i, &l);

  char *cp = &c;
  int *ip = &i;
  long *lp = &l;

  printf("*cp : %p\t *ip: %p\t *lp: %p\t\n", cp, ip, lp);

  *cp = 'd';
  *ip = 300;
  *lp = 200.0;

  printf("*cp : %p\t *ip: %p\t *lp: %p\t\n", cp, ip, lp);

  unsigned int ui = 500;
  int *ipp = &ui;
  char *cpp = &ui;

  printf("ipp %p ipp points to %u\n", ipp, *ipp);
  printf("cpp %p cpp points to %u\n", cpp, *cpp);

  printf("ui hex: %x\n", ui);
  printf("ui decimal: %u\n", ui);

  int count;
  for (count = 0; count < 4; count++){
    printf("cpp hex : %hhx\t cpp decimal : %hhu\n", *(cpp + count), *(cpp + count));
  }

  for (count = 0; count < 4; count++){
    (*(cpp + count))++;
    printf("cpp hex : %hhx\t cpp decimal : %hhu\n", *(cpp + count), *(cpp + count));
  }

  for (count = 0; count < 4; count++){
    (*(cpp + count)) += 16;
    printf("cpp hex : %hhx\t cpp decimal : %hhu\n", *(cpp + count), *(cpp + count));
  }

  return 0;
}
