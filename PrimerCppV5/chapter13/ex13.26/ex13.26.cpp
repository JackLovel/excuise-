#include "ex13_26.h"

ConstStrBlobPtr StrBlog::begin() const{
    return ConstStrBlobPtr(*this);
}
ConstStrBlobPtr StrBlog::end() const{
    return ConstStrBlobPtr(*this, data->size());
}
StrBlog& StrBlog::operator=(const StrBlog& sb){
    data = std::make_shared<vector<string>>(*sb.data);
    return *this;
}

int main()
{
    return 0;
}