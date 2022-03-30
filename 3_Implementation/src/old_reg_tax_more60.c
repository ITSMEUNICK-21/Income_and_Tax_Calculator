//Revision : 19 March 2022, 20 March 2022, 22 March 2022
//By HNS

#include <stdio.h>

double oldreg_3_to_5lpa_60more(double income_o);
double oldreg_5_to_10lpa_60more(double income_o);
double oldreg_above10lpa_60more(double income_o);
double oldreg_60more(double income_o);

double tax_m60 = 0;
/*
int main()
{
    double income = 0;
    printf("Please enter your annual salary in lpa : \n");
    scanf("%lf",&income);
    tax = oldreg_60more(income);
    printf("The tax payable is : %lf\n", tax);
    return 0;
}*/

double oldreg_60more(double income_o)
{
    if(income_o < 300000)
     {
         tax_m60 = 0;
     }
     else if(income_o >= 300001 && income_o <= 500000 )
     {
         tax_m60 = oldreg_3_to_5lpa_60more(income_o);
     }
     else if(income_o >= 500001 && income_o <= 1000000)
     {
         tax_m60 = oldreg_5_to_10lpa_60more(income_o);
     }
     else
     {
         tax_m60 = oldreg_above10lpa_60more(income_o);
     }
     return tax_m60;

}

double oldreg_3_to_5lpa_60more(double income_o)
{
    double tax_py_o;
    tax_py_o = (((income_o - 300000)*5)/100);
    return tax_py_o;
}

double oldreg_5_to_10lpa_60more(double income_o)
{
    double tax_py_o;
    tax_py_o = 10000 + (((income_o - 500000)*20)/100);
    return tax_py_o;
}

double oldreg_above10lpa_60more(double income_o)
{
    int tax_py_o;
    tax_py_o = 110000 + (((income_o - 1000000)*30)/100);
    return tax_py_o;
}