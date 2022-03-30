//Revision : 19 March 2022, 20 March 2022, 22 March 2022
//By HNS

//Combined for all ages <60 yrs, <80 yrs and >80 yrs

#include <stdio.h>

double newreg_2andhalf_to_5lpa_all(double income_n);
double newreg_5_to_7andhalflpa_all(double income_n);
double newreg_7andhalf_to_10lpa_all(double income_n);
double newreg_10_to_12andhalflpa_all(double income_n);
double newreg_12andhalf_to_15lpa_all(double income_n);
double newreg_above15lpa_all(double income_n);
double newreg_all(double income_n);

double tax_all = 0;
/*
int main()
{
    double income = 0;
    printf("Please enter your annual income in lpa : \n");
    scanf("%lf",&income);
    tax = newreg_all(income);
    printf("The tax payable is : %lf\n", tax);
    return 0;
}*/

double newreg_all(double income_n)
{
    if(income_n < 250000)
     {
         tax_all = 0;
     }
     else if(income_n >= 250001 && income_n <= 500000 )
     {
         tax_all = newreg_2andhalf_to_5lpa_all(income_n);
     }
     else if(income_n >= 500001 && income_n <= 750000)
     {
         tax_all = newreg_5_to_7andhalflpa_all(income_n);
     }
     else if(income_n >= 750001 && income_n <= 1000000)
     {
         tax_all = newreg_7andhalf_to_10lpa_all(income_n);
     }
     else if(income_n >= 1000001 && income_n <= 1250000)
     {
         tax_all = newreg_10_to_12andhalflpa_all(income_n);
     }
     else if(income_n >= 1250001 && income_n <= 1500000)
     {
         tax_all = newreg_12andhalf_to_15lpa_all(income_n);
     }
     else
     {
         tax_all = newreg_above15lpa_all(income_n);
     }
     return tax_all;
}

double newreg_2andhalf_to_5lpa_all(double income_n)
{
    double tax_py_n;
    tax_py_n = (((income_n - 250000)*5)/100);
    return tax_py_n;
}

double newreg_5_to_7andhalflpa_all(double income_n)
{
    double tax_py_n;
    tax_py_n = 12500 + (((income_n - 500000)*10)/100);
    return tax_py_n;
}

double newreg_7andhalf_to_10lpa_all(double income_n)
{
    int tax_py_n;
    tax_py_n = 37500 + (((income_n - 750000)*15)/100);
    return tax_py_n;
}

double newreg_10_to_12andhalflpa_all(double income_n)
{
    int tax_py_n;
    tax_py_n = 75000 + (((income_n - 1000000)*20)/100);
    return tax_py_n;
}

double newreg_12andhalf_to_15lpa_all(double income_n)
{
    int tax_py_n;
    tax_py_n = 125000 + (((income_n - 1250000)*25)/100);
    return tax_py_n;
}

double newreg_above15lpa_all(double income_n)
{
    int tax_py_n;
    tax_py_n = 187500 + (((income_n - 1500000)*30)/100);
    return tax_py_n;
}