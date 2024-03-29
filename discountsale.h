//this is the file discountsale.h

#ifndef DISCOUNTSALE_H
#define DISCOUNTSALE_H
#include "sale.h"

namespace SavitchSale{
    class DiscountSale : public Sale{
    public:
    DiscountSale();
    DiscountSale(double thePrice, double theDiscount);
    double getDiscount() const;
    void setDiscount(double newDiscount);
    double bill() const;
    private:
    double discount;
    };
    

}
#endif