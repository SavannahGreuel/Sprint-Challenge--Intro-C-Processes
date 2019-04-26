#include <stdio.h>
#include <dirent.h>
#include <sys/stat.h>
#include <stdlib.h>

/**
 * Main
 */
int main(int argc, char **argv)
{
  // Parse command line
 struct stat buf;
 int exists;
 DIR *d;
 struct dirent *de;

  // Open directory
  d = opendir(".");
  if (d == NULL )
  {
    fprintf(stderr, "Couldn't open \".\"\n");
    exit(1);
  }
  // Repeatly read and print entries
  for (de = readdir(d); de != NULL; de = readdir(d))
   {
      exists = stat(de->d_name, &buf);
      if(exists < 0) 
      {
        fprintf(stderr, "%s not found\n", de->d_name);
      } else 
      {
        printf("%s %ld\n", de->d_name, buf.st_size);
      }
    }

  // Close directory
  closedir(d);

  return 0;
}