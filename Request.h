#ifndef APOD_REQUEST_H
#define APOD_REQUEST_H

#include <iostream>
#include "Parser.h"
#include <curl/curl.h>

class Request: public Parser {
public:
    std::string requestCurl(std::string& url);
    static size_t writeCallback(void *contents, size_t size, size_t nmemb, void *userp);
private:
    std::string m_url;
};


#endif //APOD_REQUEST_H
