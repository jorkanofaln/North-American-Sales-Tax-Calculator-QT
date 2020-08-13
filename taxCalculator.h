#ifndef TAXCALCULATOR_H
#define TAXCALCULATOR_H
#include <math.h>
#include <string>
class taxCalculator{
public:
    taxCalculator(double p_price, std::string p_stateCode);
    double getSalesTaxRate();
    double calculateSalesTax();
private:
    double m_price;
    std::string m_stateCode;
};

#endif // TAXCALCULATOR_H
