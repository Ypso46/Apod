#ifndef APOD_REQUEST_H
#define APOD_REQUEST_H

#include <iostream>
#include <curl/curl.h>

class Request {
public:
    Request();
    std::string getUrl() const;
    void setUrl(std::string& url);
    static bool requestCurl(std::string& url);
    static size_t writeCallback(void *contents, size_t size, size_t nmemb, void *userp);
private:
    std::string m_url;
};


#endif //APOD_REQUEST_H
