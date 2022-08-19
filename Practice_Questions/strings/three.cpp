/*
3. Find duplicates in a string
*/

#include <iostream>
#define NO_OF_CHARS 256
using namespace std;

class dups
{
public:
  void findFreq(char *str, int *count)
  {
    int i;
    for (i = 0; *(str + i); i++)
      count[*(str + i)]++;
  }

  void printDuplicates(char *str)
  {
    int *count = (int *)calloc(NO_OF_CHARS, sizeof(int));
    findFreq(str, count);

    int i;
    for (i = 0; i < NO_OF_CHARS; i++)
      if (count[i] > 1)
        cout << (char)i << ", count = " << count[i] << endl;

    free(count);
  }
};

int main()
{
  dups g;
  char str[] = "helo my name is monarch";
  g.printDuplicates(str);
  return 0;
}
