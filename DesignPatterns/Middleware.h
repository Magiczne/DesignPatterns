#pragma once

#include <memory>

#include "Request.h"

class Middleware
{
private:
	std::shared_ptr<Middleware> _next;

protected:
	virtual bool canHandle(const Request& request);

public:
	void next(std::shared_ptr<Middleware> value);
	void handle(const Request& request);

	virtual ~Middleware() = default;
};