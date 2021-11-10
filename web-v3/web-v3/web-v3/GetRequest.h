#ifndef GETREQUEST_H
#define GETREQUEST_H
#include "Request.h"

using namespace std;
class GetRequest : public Web::Request {
public:
	GetRequest(string requestResource); //Konstruktor

};

#endif