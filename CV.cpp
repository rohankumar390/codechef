#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int n;
        scanf("%d",&n);
        char str[n];
        scanf("%s",&str);
        int count=0;
        for(int i=0;i<strlen(str);i++)
        {
            if(str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o' && str[i]!='u')
            {
                if(str[i+1]=='a' || str[i+1]=='e' || str[i+1]=='i' || str[i+1]=='o' || str[i+1]=='u')
                {
                    count += 1;
                }
            }
        }
        printf("%d\n",count);
    }
    return 0;
}