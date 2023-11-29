# include <stdio.h>

int main(){
  int creating;
  char boofer[128];
  
  char group[64];
  char year[16];
  char name[128];

  printf("This program will create .txt file to add there your favorite albums\n");
  printf("Print E to stop program\n\n");

  creating = 1;
  while (creating) {
    printf("Enter album name or 'E' to exit:\n");
    gets(name);

    if (*name == 'E') {
      creating = 0;
      break;
    }

    printf("Enter group name:\n");
    gets(group);

    printf("Enter year of album creation:\n");
    gets(year);

    printf("\n%s\n%s\n%s\n\n", name, group, year);
  }
  return 0;
}
