#include <stdio.h>
#include <dirent.h>
#include <sys/stat.h>

/**
 * Main
 */
int main(int argc, char **argv)
{
  // Parse command line
  int i;
  for (i = 0; i < argc; i++) 
  {
    print("   %s\n", argv[i])
  }

  // Open directory

  // Repeatly read and print entries

  // Close directory

  return 0;
}