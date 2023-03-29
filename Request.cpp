#include "Request.h"

Request::Request() {
    std::cout << "hello from request" << std::endl;
}

std::string Request::getUrl() const{
    return m_url;
}

void Request::setUrl(std::string& url) {
    m_url = url;
}


size_t Request::writeCallback(void *contents, size_t size, size_t nmemb, void *userp) {
    ((std::string*)userp)->append((char*)contents, size * nmemb);
    return size * nmemb;
}

bool Request::display() {
    CURL *curl;
    CURLcode res;
    std::string readBuffer;

    curl = curl_easy_init();
    if(curl) {
        curl_easy_setopt(curl, CURLOPT_URL, "https://api.nasa.gov/planetary/apod?api_key=a0NEfSjMIEjyE2avsUmT8DYgl4jZwlpA8GtdGgaW");
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, writeCallback);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &readBuffer);
        res = curl_easy_perform(curl);
        curl_easy_cleanup(curl);

        std::cout << readBuffer << std::endl;
    }
    return true;
}




