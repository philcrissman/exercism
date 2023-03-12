#include "say.h"

#include <stdexcept>

namespace say {
    std::string singleDigit(unsigned long long n) {
        std::string d;
        switch (n)
        {
        case 1:
            d = "one";
            break;
        case 2:
            d = "two";
            break;
        case 3:
            d ="three";
            break;
        case 4:
            d = "four";
            break;
        case 5:
            d = "five";
            break;
        case 6:
            d = "six";
            break;
        case 7:
            d = "seven";
            break;
        case 8:
            d = "eight";
            break;
        case 9:
            d = "nine";
            break;
        }
        return d;
    }

    std::string teens(unsigned long long n) {
        std::string t;
        switch (n)
        {
        case 10:
            t = "ten";
            break;
        case 11:
            t = "eleven";
            break;
        case 12:
            t = "twelve";
            break;
        case 13:
            t = "thirteen";
            break;
        case 14:
            t = "fourteen";
            break;
        case 15:
            t = "fifteen";
            break;
        case 16:
            t = "sixteen";
            break;
        case 17:
            t = "seventeen";
            break;
        case 18:
            t = "eighteen";
            break;
        case 19:
            t = "nineteen";
            break;
        }
        return t;
    }

    std::string tens(unsigned long long n){
        std::string t = "";
        if (n < 10) {
            t += singleDigit(n);
        } else if (n < 20) {
            t += teens(n);
        } else {
            switch (n / 10) {
                case 2:
                    t += "twenty";
                    break;
                case 3:
                    t += "thirty";
                    break;
                case 4:
                    t += "forty";
                    break;
                case 5:
                    t += "fifty";
                    break;
                case 6:
                    t += "sixty";
                    break;
                case 7:
                    t += "seventy";
                    break;
                case 8:
                    t += "eighty";
                    break;
                case 9:
                    t += "ninety";
                    break;
            }
            if (n % 10 > 0) {
                t += "-";
                t += singleDigit(n%10);
            }
        }
        return t;
    }

    std::string hundreds(unsigned long long n) {
        std::string h = "";
        unsigned long long hn = n / 100;
        if (hn > 0) {
            h += singleDigit(hn);
            h += " hundred";
        }
        return h;
    }

    std::string section(unsigned long long n) {
        std::string number = "";
        number += hundreds(n);
        std::string t = tens(n%100);
        if (!number.empty() && !t.empty()) {
            number += " ";
        }
        number += t;
        return number;
    }
    
    std::string in_english(long long n)
    {   
        if (n < 0) {
            throw std::domain_error("n must be >= 0");
        }
        if (n > 999999999999) {
            throw std::domain_error("n must be < 1,000,000,000,000");
        }
        std::string number = "";
        if (n == 0) {
            number += "zero";
        } else {
            auto b = n / 1000000000;
            auto bStr = section(b);
            if (!bStr.empty()) {
                number += bStr;
                number += " billion";
            }
            auto m = n % 1000000000 / 1000000;
            auto mStr = section(m);
            if (!number.empty() && !mStr.empty()) {
                number += " ";
            }
            if (!mStr.empty()) {
                number += mStr;
                number += " million";
            }
            auto th = n % 1000000 / 1000;
            auto thStr = section(th);
            if (!number.empty() && !thStr.empty()) {
                number += " ";
            }
            if (!thStr.empty()) {
                number += thStr;
                number += " thousand";
            }
            auto hun = n % 1000;
            auto hunStr = section(hun);
            if (!number.empty() && !hunStr.empty()) {
                number += " ";
            }
            number += hunStr;
        }
        
        return number;
    }
}
