#include <stdio.h> 
#include <string.h> 
int main() {
 int t; scanf("%d", &t);
while(t--) {
 char s[101]; scanf("%s", s);
 int len = strlen(s);
 for(int i = 0; i < len; ) { 
   int j = i + 1; 
   while(j < len && s[j] == s[i]) { j++; } 
   printf("%c%d", s[i], j - i);
               i = j; }
  printf("\n");
   } return 0; }
