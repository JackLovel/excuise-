#include <iostream>
#include <string>

#include "quote.h"
#include "bulk_quote.h"
#include "limit_quote.h"


/**
*  当表达式既不是引用也不是指针，则它的动态类型与静态类型一致。
***/
double print_total (std::ostream& os, const Quote& item, size_t n);
int main()
{
    Bulk_quote bulk_quote("bulk_quote_1", 10.10, 0.5);

    Quote * quote_pointer = &bulk_quote;
    quote_pointer->net_price(5);

    Quote  &quote_pointer = bulk_quote;
    quote_pointer.net_price(5);

    Quote quote = bulk_quote;
    quote.net_price(5);

    return 0;
}

double print_total(std::ostream &os, const Quote &item, size_t n)
{
    double ret = item.net_price(n);

    os << "ISBN:" << item.isbn()
       << "# sold: " << n << " total due: " << ret << std::endl;

    return ret;
}
