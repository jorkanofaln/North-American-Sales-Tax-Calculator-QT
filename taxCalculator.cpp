#include<taxCalculator.h>
taxCalculator::taxCalculator(double p_price, std::string p_stateCode):m_price(p_price),m_stateCode(p_stateCode){

}
double taxCalculator::getSalesTaxRate(){
        double salesTaxRate = 0.0;
        m_stateCode.c_str();
        if(m_stateCode == "AB")
            salesTaxRate = 0.05;
        else if( m_stateCode == "AL")
            salesTaxRate = 0.04;
        else if(m_stateCode == "AR")
             salesTaxRate = 0.065;
        else if(m_stateCode == "AZ")
                salesTaxRate = 0.056;
        else if(m_stateCode =="BC")
                salesTaxRate = 0.12;
        else if(m_stateCode =="CA")
                salesTaxRate=0.075;
        else if(m_stateCode =="CO")
                salesTaxRate=0.029;
        else if(m_stateCode =="CT")
                salesTaxRate=0.0635;
        else if(m_stateCode =="DC")
                salesTaxRate=0.0575;
        else if(m_stateCode =="FL")
                salesTaxRate=0.06;
        else if(m_stateCode =="GA")
                salesTaxRate=0.04;
        else if(m_stateCode =="HI")
                salesTaxRate=0.04;
        else if(m_stateCode =="ID")
                salesTaxRate=0.06;
        else if(m_stateCode =="IL")
                salesTaxRate=0.0625;
        else if(m_stateCode =="IN")
                salesTaxRate=0.07;
        else if(m_stateCode =="IA")
                salesTaxRate=0.06;
        else if(m_stateCode == "KS")
                salesTaxRate=0.065;
        else if (m_stateCode == "KY")
                salesTaxRate=0.06;
        else if (m_stateCode =="LA")
                salesTaxRate=0.04;
        else if (m_stateCode =="MA")
                salesTaxRate=0.0625;
        else if(m_stateCode=="MB")
                salesTaxRate=0.13;
        else if(m_stateCode=="MD")
                salesTaxRate=0.06;
        else if(m_stateCode== "ME")
                salesTaxRate=0.055;
        else if(m_stateCode=="MI")
                salesTaxRate=0.06;
        else if(m_stateCode=="MN")
                salesTaxRate=0.0688;
        else if(m_stateCode=="MO")
                salesTaxRate=0.0423;
        else if(m_stateCode=="MS")
                salesTaxRate=0.07;
        else if(m_stateCode=="NB")
                salesTaxRate=0.15;
        else if(m_stateCode=="NE")
                salesTaxRate=0.055;
        else if(m_stateCode=="NL")
                salesTaxRate=0.15;
        else if(m_stateCode=="NV")
                salesTaxRate=0.0685;
        else if(m_stateCode=="NJ")
                salesTaxRate=0.07;
        else if(m_stateCode=="NM")
                salesTaxRate=0.0513;
        else if(m_stateCode=="NT")
                salesTaxRate=0.05;
        else if(m_stateCode=="NS")
                salesTaxRate=0.15;
        else if(m_stateCode=="NU")
                salesTaxRate=0.05;
        else if(m_stateCode=="NY")
                salesTaxRate=0.04;
        else if(m_stateCode=="NC")
                salesTaxRate=0.0475;
        else if(m_stateCode=="ND")
                salesTaxRate=0.05;
        else if(m_stateCode=="OH")
                salesTaxRate=0.0575;
        else if(m_stateCode=="OK")
                salesTaxRate=0.045;
        else if(m_stateCode=="ON")
                salesTaxRate=0.13;
        else if(m_stateCode=="PA")
                salesTaxRate=0.0475;
        else if(m_stateCode=="PE")
                salesTaxRate=0.15;
        else if(m_stateCode=="QC")
                salesTaxRate=0.15;
        else if(m_stateCode=="RI")
                salesTaxRate=0.07;
        else if(m_stateCode=="SC")
                salesTaxRate=0.06;
        else if(m_stateCode=="SD")
                salesTaxRate=0.04;
        else if(m_stateCode=="SK")
                salesTaxRate=0.11;
        else if(m_stateCode=="TN")
                salesTaxRate=0.07;
        else if(m_stateCode=="TX")
                salesTaxRate=0.0475;
        else if(m_stateCode=="UT")
                salesTaxRate=0.0595;
        else if(m_stateCode=="VT")
                salesTaxRate=0.06;
        else if(m_stateCode=="VA")
                salesTaxRate=0.053;
        else if(m_stateCode=="WA")
                salesTaxRate=0.065;
        else if(m_stateCode=="WV")
                salesTaxRate=0.06;
        else if(m_stateCode=="WI")
                salesTaxRate=0.05;
        else if(m_stateCode=="WY")
                salesTaxRate=0.04;
        else if(m_stateCode=="YK")
                salesTaxRate=0.05;
        return salesTaxRate;
}
double taxCalculator::calculateSalesTax(){
    double rate = this->getSalesTaxRate();
    double taxRate = 1 + rate;
    return m_price * taxRate;
}
