#include <stdio.h>

enum day{Sun = 1, Mon, Tue, Wed, Thu , Fri, Sat};

int main() {
    enum day today = Sun;

   char *mentalstate = (today == 1 || today == 7) ? "Today is the greatest day ive ever known" : "what ra no weekend today";

    printf("%s", mentalstate);
}