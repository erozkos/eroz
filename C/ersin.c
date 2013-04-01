
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <dirent.h>
#include <stdio.h>
#include <unistd.h>
#include <time.h>
#include <sys/stat.h>
#include <fcntl.h>

/******************* main *********************************/

int main(int argc, char *argv[])
{

 char pathname[1024];
 
 char source[1024];
 char dest[1024];
 
 char echo[50];
 
 int j;
 
 char cmdline[] = "ls ";
 
 char buffer[256] = {0};
 char password[] = "password";
 char c;
 int pos = 0;
 
 time_t t = time(NULL);
 struct tm tm = *localtime(&t);
 
 char mode[]="0777";
 char fp[100]="/home/hello.t";
 int k;
 
 
 //path
 
 printf("Input your pathname:");
 scanf("%s",&pathname);
 printf("my directory: %s\n",pathname);
 
 
 //komutlar
 
 char *command [] = {"ls","cd","cp","cat","mkdir","rmdir","rm","pwd","echo","chmod","date","exit"};
 
 int state = 1;
 while(state == 1){
    printf("eroz$>");
    
   
   int i;   
   for(i = 0; command[i] != NULL ; i++){
      switch(i){
        case 0://ls 
             strcat(cmdline,argv[1]); 
             strcat(cmdline,argv[2]); 
             system(cmdline);
             break;
        case 1://cd
             chdir(pathname);
             break;
        case 2://cp
             strcpy(source,argv[1]);
             strcpy(dest,pathname);
             system("cp -r $source $dest");
             break;
        case 3://cat
             printf ( "argc = %d\n", argc );
             for ( j = 0; j < argc; j++ ){
                 printf ( "argv[%d] = %s\n", j, argv[j] );
             }
             break;
        case 4://mkdir
             mkdir(pathname);
             break;
        case 5://rmdir
             system("rm -r ./pathname");
             break;
        case 6://rm
             system("rm  ./pathname");
             break;
        case 7://pwd
             printf("%s", "Parolanizi girin: ");
            
            do {
             c = getch();
        
             if( isprint(c) ) {
               buffer[ pos++ ] = c;
               printf("%c", '*');
             }
             else if( c == 8 && pos )
             {
               buffer[ pos-- ] = '\0';
               printf("%s", "\b \b");
             }
            } while( c != 13 );
    
            if( !strcmp(buffer, password) )
              printf("\n%s\n", "Giris basarili.");
            else
               printf("\n%s\n", "Giris yapilamadi.!");

             break;
        case 8://echo
             printf("echo\n");
             scanf("%s",&echo);
             printf("%s",echo);
             break;
        case 9://chmod  
             k = atoi(mode);
             if (chmod (fp,k) < 0)
                  printf("yetkilendirme hatasi.!");
             break;
        case 10: //date
             printf("now: %d-%d-%d %d:%d:%d\n", tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday, tm.tm_hour, tm.tm_min, tm.tm_sec);
             break;
        case 11: //exit
             state = 0;
             break;
        default: 
                 printf("gecersiz islem: komut bulunamadi.!\n");
                 system("clear");
                  
     }
   } 
  }

 //free
 
 free(command);

 
 
 getch();
 return 0;

}
