#include <stdio.h>
#include <stdlib.h>
int main()
{
    int ageOfPerson1, ageOfPerson2, ageOfPerson3;
    scanf("%d %d %d",&ageOfPerson1,&ageOfPerson2,&ageOfPerson3);
    if(ageOfPerson1 <= ageOfPerson2 && ageOfPerson1 <= ageOfPerson3)
    {
        printf("person 1");
    }
    else if(ageOfPerson2 <= ageOfPerson3)
    {
        printf("person 2");
    }
    else
    {
        printf("person 3");
    }
    return 0;
}