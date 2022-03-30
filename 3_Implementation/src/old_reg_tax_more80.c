//Revision : 19 March 2022, 20 March 2022, 22 March 2022
//By HNS

#include <stdio.h>

double oldreg_5_to_10lpa_80more(double income_o);
double oldreg_above10lpa_80more(double income_o);
double oldreg_80more(double income_o);

double tax_m80 = 0;
/*
int main()
{
    double income = 0;
    
    printf("Please enter your annual salary in lpa : \n");
    scanf("%lf",&income);
    tax = oldreg_80more(income);
    printf("The tax payable is : %lf\n", tax);
    return 0;
}*/

double oldreg_80more(double income_o)
{
    if(income_o < 500000)
     {
         tax_m80 = 0;
     }
     else if(income_o >= 500001 && income_o <= 1000000)
     {
         tax_m80 = oldreg_5_to_10lpa_80more(income_o);
     }
     else
     {
         tax_m80 = oldreg_above10lpa_80more(income_o);
     }
     return tax_m80;

}


double oldreg_5_to_10lpa_80more(double income_o)
{
    double tax_py_o;
    tax_py_o = (((income_o - 500000)*20)/100);
    return tax_py_o;
}

double oldreg_above10lpa_80more(double income_o)
{
    int tax_py_o;
    tax_py_o = 100000 + (((income_o - 1000000)*30)/100);
    return tax_py_o;
}