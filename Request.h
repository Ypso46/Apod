#ifndef APOD_REQUEST_H
#define APOD_REQUEST_H

#include <fstream>
#include <iostream>
#include <curl/curl.h>
#include "Parser.h"


class Request: public Parser {
public:
    void requestCurl(std::string &url);
    static size_t writeCallback(void *contents, size_t size, size_t nmemb, void *userp);
private:
    std::string m_url;
};


#endif //APOD_REQUEST_H
