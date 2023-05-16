#ifndef APOD_REQUEST_H
#define APOD_REQUEST_H

#include <fstream>
#include <iostream>
#include <curl/curl.h>
#include "SaveJSONIntoTextFile.h"
#include "Apod.h"


class Request {
public:
    std::string requestCurl(const std::string &url);
    static size_t writeCallback(void *contents, size_t size, size_t nmemb, void *userp);
};

#endif //APOD_REQUEST_H
