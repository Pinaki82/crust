// Last Change: 2022-10-21  Friday: 05:18:59 PM
/*
  A simple Rust program to demonstrate
  file input/output & user input/output.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// https://iq.opengenus.org/detect-operating-system-in-c/
#ifdef  __linux__
  #include <unistd.h>
  char *present_dir = (char *) malloc(1024);
#endif

int main(int argc, char *argv[]) {
  char ur_name[100];
  char line[1000]; /* maximum line size */
  unsigned long len_o_prev_line = 0;
  unsigned long len_o_current_line = 0;
  unsigned int no_o_lines = 0;
  FILE  *file1;      /* output-file pointer */
  FILE  *file2;      /* input-file pointer */
  /* Creating the file & writing to it */
  char  *file1_file_name = "textfile_in_c.txt";      /* output-file name */ /* use extension within double quotes */
  file1 = fopen(file1_file_name, "w"); // opened file in write mode, overwriting the old one.

  if(file1 == NULL) {
    fprintf(stderr, "\ncouldn't open file '%s'; %s\n", file1_file_name,  strerror(errno));
    exit(EXIT_FAILURE);
  }

  else if(file1 != NULL) {
    fprintf(stderr, "\nopened file '%s'; %s\n", file1_file_name,  strerror(errno));
    // continue here
    printf("Type your name and hit Enter:\n");
    /*scanf("%s",  ur_name);*/
    fgets(ur_name, 64, stdin); // https://stackoverflow.com/questions/8033189/scanfs-not-allowing-space-c-programming
    printf("You typed: %s\n", ur_name);
    fprintf(file1, "%s", ur_name);

    if(fclose(file1) == EOF)  {    /* close output file */
      fprintf(stderr, "\ncouldn't close file '%s'; %s\n", file1_file_name,  strerror(errno));
      exit(EXIT_FAILURE);
    }
  }

  /* Reading the file */
  char  *file2_file_name = "textfile_in_c.txt";      /* input-file name */ /* use extension within double quotes */
  file2  = fopen(file2_file_name, "r");

  if(file2 == NULL) {
    fprintf(stderr, "\ncouldn't open file '%s'; %s\n", file2_file_name,  strerror(errno));
    exit(EXIT_FAILURE);
  }

  else if(file2 != NULL) {
    fprintf(stderr, "\nopened file '%s'; %s\n", file2_file_name,  strerror(errno));

    // continue here
    while(fgets(line, sizeof line, file2) != NULL) {
      len_o_current_line = strlen(line) - 1;

      if(len_o_prev_line < len_o_current_line) {
        len_o_prev_line = len_o_current_line;
      }

      printf("Line content: %s", line);
      printf("Line No. %u. Lenght of the line: %lu\n", no_o_lines + 1, len_o_current_line);
      no_o_lines++;
    }

    if(fclose(file2) == EOF)  {    /* close input file */
      fprintf(stderr, "\ncouldn't close file '%s'; %s\n", file2_file_name,  strerror(errno));
      exit(EXIT_FAILURE);
    }
  }

  // MS Windows
#ifdef  __WIN32__
  printf("$PWD: ");
  system("echo %cd%");
  printf("\n");
#endif
  // Linux
#ifdef  __linux__

  if(getcwd(present_dir, 1024) != NULL) {
    fprintf(stdout, "Present Working Directory: %s\n", present_dir);
  }

#endif
}

