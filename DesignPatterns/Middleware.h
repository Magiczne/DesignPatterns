#pragma once

#include "Request.h"

#include <memory>

namespace CoR
{
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
}
