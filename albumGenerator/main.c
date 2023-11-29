# include <stdio.h>
# include <stdlib.h>

struct album{
  char year[16];
  char group[64];
  char name[64];
  struct album * last;
};

int main(){
  int creating;
  
  struct album * last;
  struct album * tmp;
  char answer[1];
  
  FILE * file;

  last = NULL;
  creating = 1;
  while (creating) {
    tmp = malloc(sizeof(struct album));

    printf("Enter album name: ");
    gets(tmp->name);

    printf("Enter group name: ");
    gets(tmp->group);

    printf("Enter album year: ");
    gets(tmp->year);

    tmp->last = last;

    last = tmp;

    printf("Would you like to add more albums? (y/n)\n");
    gets(answer);

    if (*answer == 'n') {
      creating = 0;
    }
  }

  if (file = fopen("albums.txt", "w")) {
    while (1) {
      if (!last) {
	break;
      }

      fprintf(file, "%s\t%s\t%s\n", last->name, last->group, last->year);
      tmp = last;
      last = last->last;
      free(tmp);
    }
  } else {
    printf("ERROR while opening file!\n");
  }

  fclose(file);
  return 0;
}
