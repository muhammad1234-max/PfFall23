/**
 * Programmer: Muhammad Abbas
 * Desc: question5
 * Date: 10/3/23
*/

#include <stdio.h>
// loop i sbeing run 7 times for 7 rows and \t is being used for space
int main() {
    int i;
    for(int i =0;i<=6;i++) {
        if (i%2==0) {
            printf("%d \t %d \t %d \t %d \n",i,i,i,i);
        } else {
            printf("\t %d \t %d \n",i,i);
        }
    }


    return 0;
}
