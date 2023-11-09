#include <stdio.h>
#include <stdlib.h>
void shell(){
printf("WOW!");
system("/bin/sh");
exit(0);
}
void overflow(int len) {
    void (*(func[15]))();
    func[14]=shell;
    if (len>12) {
    	printf("You don't allow"); 
    }
    else if (func[len]!=shell) printf("nothing here");
    else func[14]();
}

int main(int argc, char *argv[]) {
    int len;
    printf("lenght: ");
    scanf("%d",&len);
    overflow(len);
    return 0;
}
