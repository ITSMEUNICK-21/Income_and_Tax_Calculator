//Revision : 29 March 2022, 30 March 2022
//By HNS

// Old Regime main-function prototype

double oldreg_60less(double income_o);

double oldreg_60more(double income_o);

double oldreg_80more(double income_o);

// New Regime main-function prototype

double newreg_all(double income_n);


// New Regime sub-function prototype (based on tax bracket)

double newreg_2andhalf_to_5lpa_all(double income_n);
double newreg_5_to_7andhalflpa_all(double income_n);
double newreg_7andhalf_to_10lpa_all(double income_n);
double newreg_10_to_12andhalflpa_all(double income_n);
double newreg_12andhalf_to_15lpa_all(double income_n);
double newreg_above15lpa_all(double income_n);

// Old Regime sub-function prototype for age less than 60 (based on tax bracket)

double oldreg_2andhalf_to_5lpa(double income_o);
double oldreg_5_to_10lpa(double income_o);
double oldreg_above10lpa(double income_o);

// Old Regime sub-function prototype for age more than 60 and less than 80 (based on tax bracket)

double oldreg_3_to_5lpa_60more(double income_o);
double oldreg_5_to_10lpa_60more(double income_o);
double oldreg_above10lpa_60more(double income_o);

// Old Regime sub-function prototype for age more than 80 (based on tax bracket)

double oldreg_5_to_10lpa_80more(double income_o);
double oldreg_above10lpa_80more(double income_o);





