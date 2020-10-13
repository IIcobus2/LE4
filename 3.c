#include <stdio.h>
#include <string.h>
int main(void)
{
    char a[200];
    int nLinha = 0;
    int Acount = 0,Ccount = 0,Gcount = 0,Tcount = 0;
    double total;
    FILE *f =  fopen("1.fasta","r");
    if(f != NULL)
    {
        while(fgets(a,sizeof(a),f) != NULL)
        {

            if(a[0] != '>')
            {
                for(int i = 0; i < strlen(a);i++)
                {
                    if(a[i] == 'G')
                    {
                        Gcount++;
                    }
                    else if(a[i] == 'A')
                    {
                        Acount++;
                    }
                    else if(a[i] == 'C')
                    {
                        Ccount++;
                    }
                    else if(a[i] == 'T')
                    {
                        Tcount++;
                    }
                }
            }
            else if(nLinha > 0)
            {

                total = ((double)(Ccount + Gcount)/(Gcount + Ccount + Acount + Tcount)) *100;
                printf("%lf\n",total);
                printf("%s\n", a);
                Ccount = 0;
                Gcount = 0;
                Tcount = 0;
                Acount = 0;

            }else
            {
                printf("%s\n", a);
            }
            nLinha++;
        }
        total = ((double)(Ccount + Gcount)/(Gcount + Ccount + Acount + Tcount)) *100;
        printf("%lf\n",total);
        fclose(f);
    }
    return 0;
}
