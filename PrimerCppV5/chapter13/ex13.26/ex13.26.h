#ifndef EX13_26_H
#define EX13_26_H

#include <vector>
#include <string>
#include <initializer_list>
#include <memory>
#include <exception>

using std::vector; using std::string;

class ConstStrBlobPtr;

class StrBlog {
public:
    using size_type = vector<string>::size_type;
    friend class ConstStrBlobPtr;

    ConstStrBlobPtr begin() const;
    ConstStrBlobPtr end() const;

    StrBlog() : data(std::make_shared<vector<string>>){}
    StrBlog(std::initializer_list<string> il):
        data(std::make_shared<vector<string>>(il)){}

    // Copy constructor
    StrBlog(const StrBlog& sb) : data(std::make_shared<vector<string>>(*sb.data)){}
    // copy assignment operators
    StrBlog& operator = (const StrBlog& sb);

    size_type size() const { return data->size(); }
    bool empty() const { return data->empty(); }

    void push_back(const string &t) { data->push_back(t); }
    void pop_back(){
        check(0, "pop_back ont empty StrBlob");
        data->pop_back();
    }

    std::string& front(){
        check(0, "front on empty StrBlob");
        return data->front();
    }

    std::string& back(){
        check(0, "back on empty StrBlob");
        return data->back();
    }

    const std::string& front() const {
        check(0, "front on empty StrBlob");
        return data->front();
    }

    const std::string& back() const{
        check(0, "back on empty StrBlob");
        return data->back();
    }

private:
    void check(size_type i, const string &msg) const {
        if(i >= data->size()) throw std::out_of_range(msg);
    }

private:
    std::shared_ptr<vector<string>> data;
};

class ConstStrBlobPtr{
public:
    ConstStrBlobPtr():curr(0){}
    ConstStrBlobPtr(const StrBlog &a, size_t sz = 0) :
        wptr(a.data), curr(sz){}
    bool operator !=(ConstStrBlobPtr& p){ return p.curr != curr; }
    const string& deref() const {
        auto p = check(curr, "dereference past end");
        return (*p)[curr];
    }
    ConstStrBlobPtr& incr(){
        check(curr, "increment past end of StrBlobPtr");
        ++curr;
        return *this;
    }
private:
    std::shared_ptr<vector<string>> check(size_t i, const string &msg) const {
        auto ret = wptr.lock();
        if(!ret) throw std::runtime_error("unbound StrBlobStr");
        if(i >= ret->size()) throw std::out_of_range(msg);
        return ret;
    }

    std::weak_ptr<vector<string>> wptr;
    size_t curr;

};
#endif // EX13_26_H
