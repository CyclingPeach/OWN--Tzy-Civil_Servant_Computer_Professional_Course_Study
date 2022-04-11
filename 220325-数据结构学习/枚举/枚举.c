#include <stdio.h>

enum week {
    sun,mon,tue,wed,thu,fri,sat
}a,b,c;
/*等价于
enum week {
    sun,mon,tue,wed,thu,fri,sat
};
enum week a,b,c;
*/

void main() {
    a=sun;
    b=mon;
    c=tue;
    printf("%d,%d,%d",a,b,c);
}