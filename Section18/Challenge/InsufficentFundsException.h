#ifndef __INSUFFICENT_FUNDS_EXCEPTION_H__
#define __INSUFFICENT_FUNDS_EXCEPTION_H__


class InsufficentFundsException : public std::exception {
public:
    InsufficentFundsException() noexcept = default;
    ~InsufficentFundsException() = default;
    
    virtual const char* what() const noexcept {
        return "InsufficentFundsException";
    }
};

#endif