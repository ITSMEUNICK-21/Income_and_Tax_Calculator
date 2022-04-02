/**
 * @file all_functions.h
 * @author Hegde Nikhil Suresh
 * @brief Header file for Income Tax Calculator Application for tax payable calculations
 *
 */

/**
* @brief Compares the income according to the tax slab through sub-functions in Old Regime and age less than 60 and returns the result as tax
* @param[in] income_o
* @param[out] tax_l60 
* @return Result as tax returned through corresponding sub-functions within
*/
double oldreg_60less(double income_o);

/**
* @brief Compares the income according to the tax slab through sub-functions in Old Regime and age more than 60 but less than 80 and returns the result as tax
* @param[in] income_o
* @param[out] tax_m60 
* @return Result as tax returned through corresponding sub-functions within
*/
double oldreg_60more(double income_o);

/**
* @brief Compares the income according to the tax slab through sub-functions in Old Regime and age more than 80 and returns the result as tax
* @param[in] income_o
* @param[out] tax_m80 
* @return Result as tax returned through corresponding sub-functions within
*/
double oldreg_80more(double income_o);


/**
* @brief Compares the income according to the tax slab through sub-functions in New Regime and returns the result as tax
* @param[in] income_n
* @param[out] tax_all 
* @return Result as tax returned through corresponding sub-functions within
*/
double newreg_all(double income_n);



/**
* @brief Calculates tax on income in tax bracket of (2.5 - 5 lpa) in New Regime and returns the result as tax
* Formula : (((income_n - 250000)*5)/100)
* @param[in] income_n
* @param[out] tax_py_n
* @return Result as tax 
*/
double newreg_2andhalf_to_5lpa_all(double income_n);

/**
* @brief Calculates tax on income in tax bracket of (5 - 7.5 lpa) in New Regime and returns the result as tax
* Formula : 12500 + (((income_n - 500000)*10)/100)
* @param[in] income_n
* @param[out] tax_py_n
* @return Result as tax 
*/
double newreg_5_to_7andhalflpa_all(double income_n);


/**
* @brief Calculates tax on income in tax bracket of (7.5 - 10 lpa) in New Regime and returns the result as tax
* Formula : 37500 + (((income_n - 750000)*15)/100) 
* @param[in] income_n
* @param[out] tax_py_n
* @return Result as tax 
*/
double newreg_7andhalf_to_10lpa_all(double income_n);

/**
* @brief Calculates tax on income in tax bracket of (10 - 12.5 lpa) in New Regime and returns the result as tax
* Formula : 75000 + (((income_n - 1000000)*20)/100)
* @param[in] income_n
* @param[out] tax_py_n
* @return Result as tax 
*/
double newreg_10_to_12andhalflpa_all(double income_n);

/**
* @brief Calculates tax on income in tax bracket of (12.5 - 15 lpa) in New Regime and returns the result as tax
* Formula : 125000 + (((income_n - 1250000)*25)/100)
* @param[in] income_n
* @param[out] tax_py_n
* @return Result as tax 
*/
double newreg_12andhalf_to_15lpa_all(double income_n);

/**
* @brief Calculates tax on income in tax bracket of more than 15 lpa in New Regime and returns the result as tax
* Formula : 187500 + (((income_n - 1500000)*30)/100)
* @param[in] income_n
* @param[out] tax_py_n
* @return Result as tax 
*/
double newreg_above15lpa_all(double income_n);



/**
* @brief Calculates tax on income in tax bracket of (2.5 - 5 lpa) in Old Regime, age less than 60 and returns the result as tax
* Formula : (((income_o - 250000)*5)/100)
* @param[in] income_o
* @param[out] tax_py_o
* @return Result as tax 
*/
double oldreg_2andhalf_to_5lpa(double income_o);

/**
* @brief Calculates tax on income in tax bracket of (5 - 10 lpa) in Old Regime, age less than 60 and returns the result as tax
* Formula : 12500 + (((income_o - 500000)*20)/100)
* @param[in] income_o
* @param[out] tax_py_o
* @return Result as tax 
*/
double oldreg_5_to_10lpa(double income_o);

/**
* @brief Calculates tax on income in tax bracket of more than 10 lpa in Old Regime, age less than 60 and returns the result as tax
* Formula : 112500 + (((income_o - 1000000)*30)/100)
* @param[in] income_o
* @param[out] tax_py_o
* @return Result as tax 
*/
double oldreg_above10lpa(double income_o);


/**
* @brief Calculates tax on income in tax bracket of (2.5 - 5 lpa) in Old Regime, age more than 60 but less than 80 and returns the result as tax
* Formula : (((income_o - 300000)*5)/100)
* @param[in] income_o
* @param[out] tax_py_o
* @return Result as tax 
*/
double oldreg_3_to_5lpa_60more(double income_o);

/**
* @brief Calculates tax on income in tax bracket of (5 - 10 lpa) in Old Regime, age more than 60 but less than 80 and returns the result as tax
* Formula : 10000 + (((income_o - 500000)*20)/100)
* @param[in] income_o
* @param[out] tax_py_o
* @return Result as tax 
*/
double oldreg_5_to_10lpa_60more(double income_o);

/**
* @brief Calculates tax on income in tax bracket of more than 10 lpa in Old Regime, age more than 60 but less than 80 and returns the result as tax
* Formula : 110000 + (((income_o - 1000000)*30)/100)
* @param[in] income_o
* @param[out] tax_py_o
* @return Result as tax 
*/
double oldreg_above10lpa_60more(double income_o);


/**
* @brief Calculates tax on income in tax bracket of (5 - 10 lpa) in Old Regime, age more than 80 and returns the result as tax
* Formula : (((income_o - 500000)*20)/100)
* @param[in] income_o
* @param[out] tax_py_o
* @return Result as tax 
*/
double oldreg_5_to_10lpa_80more(double income_o);

/**
* @brief Calculates tax on income in tax bracket of more than 10 lpa in Old Regime, age more than 80 and returns the result as tax
* Formula : 100000 + (((income_o - 1000000)*30)/100)
* @param[in] income_o
* @param[out] tax_py_o
* @return Result as tax 
*/
double oldreg_above10lpa_80more(double income_o);





