#include "help.h"

void std_help()
{
  write (1, "usage encryptor:\n",18);
  write (1, "   -d (destination) if you want to save the result in a file, else if it will be print on cmd\n",95);
  write (1, "   -s (source) if you want to crypte a file\n",45);
  write (1, "   -e (encryptor) you can choose between HASH |CAESAR | XOR  | BYTBIT | SHAKER\n",80);
  write (1, "   -p if you want to see the result on the cmd\n",48);
  write (1, "   -c (cipher) true or false true = crypting false = decrypting\n",65);
  write (1, "   -k (key) the key that will be used for crypting\n",52);
}
