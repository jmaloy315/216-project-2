#include <stdio.h>
#include <string.h>
#include "document.h"

int main() {
   Document doc;
   const char *doc_name = "Loading Document ";
   int data_lines = 8;
   char data[20][MAX_STR_SIZE + 1] = {
        "The first course you need to take",
	"is cmsc131.  This course will be",
	"followed by cmsc132 (which is also based on Java).",
	"",
	"The next course you will take is cmsc216.",
	"This course relies on C.",
	"",
	"Ruby and Ocaml will be covered in cmsc330"
   };

 char data2[20][MAX_STR_SIZE + 1] = {
        "AAA AA A AAAA AAA AA A A",
	"BBB BBB BB B BBB BBBB BBBBBB",
	"CCCCC C CC CCCCC C C CCCCC CC C",
	"",
	"DD DDD DDDDD DDD DD DD DDD DDDDDD",
	"E E EE EEEEEE EEE EEE E",
	"",
	"FFFFFFFFFFF FFF F FF FFF"
   };

   init_document(&doc, doc_name);
   load_document(&doc, data, data_lines);
   load_document(&doc, data2, data_lines);
   print_document(&doc);

   return 0;
}